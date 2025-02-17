/**
 * Port Drayage Web Service.
 * Web Service for Loading/Unloading/Inspection interactions for Port Drayage Operations.
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIInspectionRequest.h
 *
 * 
 */

#ifndef OAIInspectionRequest_H
#define OAIInspectionRequest_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIInspectionRequest : public OAIObject {
public:
    OAIInspectionRequest();
    OAIInspectionRequest(QString json);
    ~OAIInspectionRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getVehicleId() const;
    void setVehicleId(const QString &vehicle_id);
    bool is_vehicle_id_Set() const;
    bool is_vehicle_id_Valid() const;

    QString getContainerId() const;
    void setContainerId(const QString &container_id);
    bool is_container_id_Set() const;
    bool is_container_id_Valid() const;

    QString getActionId() const;
    void setActionId(const QString &action_id);
    bool is_action_id_Set() const;
    bool is_action_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString vehicle_id;
    bool m_vehicle_id_isSet;
    bool m_vehicle_id_isValid;

    QString container_id;
    bool m_container_id_isSet;
    bool m_container_id_isValid;

    QString action_id;
    bool m_action_id_isSet;
    bool m_action_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIInspectionRequest)

#endif // OAIInspectionRequest_H
