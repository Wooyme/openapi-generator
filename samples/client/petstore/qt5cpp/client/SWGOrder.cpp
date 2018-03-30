/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGOrder.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGOrder::SWGOrder(QString json) {
    init();
    this->fromJson(json);
}

SWGOrder::SWGOrder() {
    init();
}

SWGOrder::~SWGOrder() {
    this->cleanup();
}

void
SWGOrder::init() {
    id = 0L;
    m_id_isSet = false;
    pet_id = 0L;
    m_pet_id_isSet = false;
    quantity = 0;
    m_quantity_isSet = false;
    ship_date = NULL;
    m_ship_date_isSet = false;
    status = new QString("");
    m_status_isSet = false;
    complete = false;
    m_complete_isSet = false;
}

void
SWGOrder::cleanup() {



    if(ship_date != nullptr) { 
        delete ship_date;
    }
    if(status != nullptr) { 
        delete status;
    }

}

SWGOrder*
SWGOrder::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGOrder::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    
    ::Swagger::setValue(&pet_id, pJson["petId"], "qint64", "");
    
    ::Swagger::setValue(&quantity, pJson["quantity"], "qint32", "");
    
    ::Swagger::setValue(&ship_date, pJson["shipDate"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&status, pJson["status"], "QString", "QString");
    
    ::Swagger::setValue(&complete, pJson["complete"], "bool", "");
    
}

QString
SWGOrder::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGOrder::asJsonObject() {
    QJsonObject obj;
    if(m_id_isSet){
        obj.insert("id", QJsonValue(id));
    }
    if(m_pet_id_isSet){
        obj.insert("petId", QJsonValue(pet_id));
    }
    if(m_quantity_isSet){
        obj.insert("quantity", QJsonValue(quantity));
    }
    if(ship_date != nullptr && *ship_date != QString("")){
        toJsonValue(QString("shipDate"), ship_date, obj, QString("QDateTime"));
    }
    if(ship_date != nullptr) { 
        toJsonValue(QString("shipDate"), ship_date, obj, QString("QDateTime"));
    }
    if(status != nullptr && *status != QString("")){
        toJsonValue(QString("status"), status, obj, QString("QString"));
    }
    if(m_complete_isSet){
        obj.insert("complete", QJsonValue(complete));
    }

    return obj;
}

qint64
SWGOrder::getId() {
    return id;
}
void
SWGOrder::setId(qint64 id) {
    this->id = id;
    this->m_id_isSet = true;
}

qint64
SWGOrder::getPetId() {
    return pet_id;
}
void
SWGOrder::setPetId(qint64 pet_id) {
    this->pet_id = pet_id;
    this->m_pet_id_isSet = true;
}

qint32
SWGOrder::getQuantity() {
    return quantity;
}
void
SWGOrder::setQuantity(qint32 quantity) {
    this->quantity = quantity;
    this->m_quantity_isSet = true;
}

QDateTime*
SWGOrder::getShipDate() {
    return ship_date;
}
void
SWGOrder::setShipDate(QDateTime* ship_date) {
    this->ship_date = ship_date;
    this->m_ship_date_isSet = true;
}

QString*
SWGOrder::getStatus() {
    return status;
}
void
SWGOrder::setStatus(QString* status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool
SWGOrder::isComplete() {
    return complete;
}
void
SWGOrder::setComplete(bool complete) {
    this->complete = complete;
    this->m_complete_isSet = true;
}


bool
SWGOrder::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_id_isSet){ isObjectUpdated = true; break;}
        if(m_pet_id_isSet){ isObjectUpdated = true; break;}
        if(m_quantity_isSet){ isObjectUpdated = true; break;}
        if(ship_date != nullptr && *ship_date != QString("")){ isObjectUpdated = true; break;}
        if(status != nullptr && *status != QString("")){ isObjectUpdated = true; break;}
        if(m_complete_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

