//
// Created by koncord on 05.01.16.
//

#include "PacketPosition.hpp"
#include <components/openmw-mp/NetworkMessages.hpp>

using namespace std;
using namespace mwmp;

PacketPosition::PacketPosition(RakNet::RakPeerInterface *peer) : BasePacket(peer)
{
    packetID = ID_GAME_UPDATE_POS;
    priority = MEDIUM_PRIORITY;
    //reliability = UNRELIABLE_SEQUENCED;
}

void PacketPosition::Packet(RakNet::BitStream *bs, BasePlayer *player, bool send)
{
    BasePacket::Packet(bs, player, send);

    RW(*player->Position(), send);
    RW(*player->Dir(), send);
}