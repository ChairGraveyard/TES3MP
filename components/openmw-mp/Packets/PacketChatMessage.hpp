//
// Created by koncord on 06.03.16.
//

#ifndef OPENMW_PACKETCHATMESSAGE_HPP
#define OPENMW_PACKETCHATMESSAGE_HPP

#include <components/openmw-mp/Packets/BasePacket.hpp>

namespace mwmp
{
    class PacketChatMessage : public BasePacket
    {
    public:
        PacketChatMessage(RakNet::RakPeerInterface *peer);

        virtual void Packet(RakNet::BitStream *bs, BasePlayer *player, bool send);
    };
}

#endif //OPENMW_PACKETCHATMESSAGE_HPP
