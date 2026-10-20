#pragma once
#include <Common\ECS\Controller\auto_OksEngine.ECSController.hpp>

namespace Common {
    void CreateECSController::Update() {


        const ECS2::Entity::Id entityId = CreateEntity();

        CreateComponent<ECSController>(entityId);

    };
}
