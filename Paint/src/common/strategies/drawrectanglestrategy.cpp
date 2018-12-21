#include "drawrectanglestrategy.h"

void DrawRectangleStrategy::drawRequest(QPainter *painter)
{
    painter->drawRect(m_bounds.getRect());
}

void DrawRectangleStrategy::mouseTouch(const QMouseEvent &state, bool paintStarted)
{
    if (!paintStarted) {
        m_bounds.setStart(state.pos());
    } else {
        m_bounds.setEnd(state.pos());
    }
}