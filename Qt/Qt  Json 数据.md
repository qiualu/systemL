# Qt操作Json

### QJsonDocument

QJsonDocument类提供了读写JSON文档的方法

```
QJsonParseError jsonParseError;
   QJsonDocument jsonDocument(QJsonDocument::fromJson(array, &jsonParseError));
   if(QJsonParseError::NoError != jsonParseError.error)
   {
       qDebug() << QString("JsonParseError: %1").arg(jsonParseError.errorString());
       return;
   }
```

```
// 打开文件
    QFile loadFile("./123.txt");

    if(!loadFile.open(QIODevice::ReadOnly))
    {
        qDebug() << QString("fail to open the file: %1, %2, %3").arg(__FILE__).arg(__LINE__).arg(__FUNCTION__);
        return;
    }
    //  读取数据到array
    QByteArray allData = loadFile.readAll();
    loadFile.close(); // 关闭文件
    // 转化到json结构
    QJsonParseError json_error;
    QJsonDocument jsonDoc(QJsonDocument::fromJson(allData, &json_error));
    if(json_error.error != QJsonParseError::NoError) // 判断转化结果是否成功
    {
        qDebug() << QString("json error! : %1, %2, %3").arg(__FILE__).arg(__LINE__).arg(__FUNCTION__);
        return;
    }
    // 转化成json 对象
    QJsonObject rootObj = jsonDoc.object();

    QStringList keys = rootObj.keys();
    for(int i = 0; i < keys.size(); i++)
    {
        qDebug() << "key" << i << " is:" << keys.at(i);
    }

    //因为是预先定义好的JSON数据格式，所以这里可以这样读取
    if(rootObj.contains("first fruit"))
    {
       QJsonObject subObj = rootObj.value("first fruit").toObject();
       qDebug() << "describe is:" << subObj["describe"].toString();
       qDebug() << "icon is:" << subObj["icon"].toString();
       qDebug() << "name is:" << subObj["name"].toString();
    }

    if(rootObj.contains("second fruit"))
    {
       QJsonObject subObj = rootObj.value("second fruit").toObject();
       qDebug() << "describe is:" << subObj.value("describe").toString();
       qDebug() << "icon is:" << subObj.value("icon").toString();
       qDebug() << "name is:" << subObj.value("name").toString();
    }

    if(rootObj.contains("three fruit array"))
    {
       QJsonArray subArray = rootObj.value("three fruit array").toArray();
       for(int i = 0; i< subArray.size(); i++)
       {
           qDebug() << i<<" value is:" << subArray.at(i).toString();
       }
    }
```