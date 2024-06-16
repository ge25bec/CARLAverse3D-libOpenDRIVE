#include "Geometries/RoadGeometry.h"

namespace odr
{

RoadGeometry::RoadGeometry(double s0, double x0, double y0, double hdg0, double length, GeometryType type) :
    s0(s0), x0(x0), y0(y0), hdg0(hdg0), length(length), type(type)
{
}

double RoadGeometry::get_heading(double s) const
{
    const Vec2D grad = get_grad(s);
    return std::atan2(grad[1], grad[0]);
}

} // namespace odr
