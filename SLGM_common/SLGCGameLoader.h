#ifndef SLGCGAMELOADER_H
#define SLGCGAMELOADER_H

class SLGCGame;
class QString;
class QXmlStreamReader;

class SLGCGameLoader
{
protected:
	SLGCGame* game;
	bool parseMapFile(QXmlStreamReader* reader);
	bool parseMap(QXmlStreamReader* reader);
	bool parseLayer(QXmlStreamReader* reader, const QString& mapName);
public:
	SLGCGameLoader(SLGCGame* _game);
	bool loadMap(const QString& fileName);
};

#endif // SLGCGAMELOADER_H