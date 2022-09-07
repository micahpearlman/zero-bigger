#ifndef BIGGER_CAMERA_HPP
#define BIGGER_CAMERA_HPP

#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "scene-node.hpp"
#include <memory>

namespace bigger {
class Camera : public bigger::SceneNode {
  public:
    static std::shared_ptr<Camera> create(const std::string& name, int view_width, int view_height);

    virtual glm::mat4 viewMatrix() const = 0;
    virtual void      setViewProj() = 0;

    virtual float            fov() const = 0;
    virtual void             setFov(float f) = 0;
    virtual float            nearClip() const = 0;
    virtual void             setNearClip(float c) = 0;
    virtual float            farClip() const = 0;
    virtual void             setFarClip(float c) = 0;
    virtual float            aspect() const = 0;
    virtual int              width() const = 0;
    virtual int              height() const = 0;

  protected:
    Camera(const std::string& name) : SceneNode(name){}
};
} // namespace bigger

#endif // BIGGER_CAMERA_HPP
