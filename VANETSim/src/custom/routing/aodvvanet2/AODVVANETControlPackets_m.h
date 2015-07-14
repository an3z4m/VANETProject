//
// Generated file, do not edit! Created by nedtool 4.6 from custom/routing/aodvvanet2/AODVVANETControlPackets.msg.
//

#ifndef _AODVVANETCONTROLPACKETS_M_H_
#define _AODVVANETCONTROLPACKETS_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "IPv4Address.h"
#include "simtime_t.h"
#include "ModuleAccess.h"
#include "IVANETMobility.h"
#include "Coord.h"
// }}

/**
 * Struct generated from custom/routing/aodvvanet2/AODVVANETControlPackets.msg:34 by nedtool.
 */
struct UnreachableNode
{
    UnreachableNode();
    IPv4Address addr;
    unsigned int seqNum;
};

void doPacking(cCommBuffer *b, UnreachableNode& a);
void doUnpacking(cCommBuffer *b, UnreachableNode& a);

/**
 * Enum generated from <tt>custom/routing/aodvvanet2/AODVVANETControlPackets.msg:40</tt> by nedtool.
 * <pre>
 * enum AODVVANETControlPacketType
 * {
 * 
 *     RREQ = 1;
 *     RREP = 2;
 *     RERR = 3;
 *     RREPACK = 4;
 * }
 * </pre>
 */
enum AODVVANETControlPacketType {
    RREQ = 1,
    RREP = 2,
    RERR = 3,
    RREPACK = 4
};

/**
 * Class generated from <tt>custom/routing/aodvvanet2/AODVVANETControlPackets.msg:51</tt> by nedtool.
 * <pre>
 * //
 * // Base packet for AODVVANET Control Packets
 * //
 * packet AODVVANETControlPacket
 * {
 *     unsigned int packetType;
 * }
 * </pre>
 */
class AODVVANETControlPacket : public ::cPacket
{
  protected:
    unsigned int packetType_var;

  private:
    void copy(const AODVVANETControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVVANETControlPacket&);

  public:
    AODVVANETControlPacket(const char *name=NULL, int kind=0);
    AODVVANETControlPacket(const AODVVANETControlPacket& other);
    virtual ~AODVVANETControlPacket();
    AODVVANETControlPacket& operator=(const AODVVANETControlPacket& other);
    virtual AODVVANETControlPacket *dup() const {return new AODVVANETControlPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doPacking(cCommBuffer *b, AODVVANETControlPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVVANETControlPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>custom/routing/aodvvanet2/AODVVANETControlPackets.msg:59</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODVVANET Route Request
 * //
 * class AODVVANETRREQ extends AODVVANETControlPacket
 * {
 *     unsigned int packetType = RREQ;
 *     bool joinFlag;
 *     bool repairFlag;
 *     bool gratuitousRREPFlag;
 *     bool destOnlyFlag;
 *     bool unknownSeqNumFlag;
 *     unsigned int hopCount;
 *     unsigned int rreqId;
 *     IPv4Address destAddr;
 *     unsigned int destSeqNum;
 *     IPv4Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     Coord position;
 *     Coord speed;
 *     Coord acceleration;
 *     Coord direction;
 *     double twr;
 *     double expirationtime;
 * }
 * </pre>
 */
class AODVVANETRREQ : public ::AODVVANETControlPacket
{
  protected:
    unsigned int packetType_var;
    bool joinFlag_var;
    bool repairFlag_var;
    bool gratuitousRREPFlag_var;
    bool destOnlyFlag_var;
    bool unknownSeqNumFlag_var;
    unsigned int hopCount_var;
    unsigned int rreqId_var;
    IPv4Address destAddr_var;
    unsigned int destSeqNum_var;
    IPv4Address originatorAddr_var;
    unsigned int originatorSeqNum_var;
    Coord position_var;
    Coord speed_var;
    Coord acceleration_var;
    Coord direction_var;
    double twr_var;
    double expirationtime_var;

  private:
    void copy(const AODVVANETRREQ& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVVANETRREQ&);

  public:
    AODVVANETRREQ(const char *name=NULL);
    AODVVANETRREQ(const AODVVANETRREQ& other);
    virtual ~AODVVANETRREQ();
    AODVVANETRREQ& operator=(const AODVVANETRREQ& other);
    virtual AODVVANETRREQ *dup() const {return new AODVVANETRREQ(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual bool getJoinFlag() const;
    virtual void setJoinFlag(bool joinFlag);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getGratuitousRREPFlag() const;
    virtual void setGratuitousRREPFlag(bool gratuitousRREPFlag);
    virtual bool getDestOnlyFlag() const;
    virtual void setDestOnlyFlag(bool destOnlyFlag);
    virtual bool getUnknownSeqNumFlag() const;
    virtual void setUnknownSeqNumFlag(bool unknownSeqNumFlag);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual unsigned int getRreqId() const;
    virtual void setRreqId(unsigned int rreqId);
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<AODVVANETRREQ*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual IPv4Address& getOriginatorAddr();
    virtual const IPv4Address& getOriginatorAddr() const {return const_cast<AODVVANETRREQ*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const IPv4Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual Coord& getPosition();
    virtual const Coord& getPosition() const {return const_cast<AODVVANETRREQ*>(this)->getPosition();}
    virtual void setPosition(const Coord& position);
    virtual Coord& getSpeed();
    virtual const Coord& getSpeed() const {return const_cast<AODVVANETRREQ*>(this)->getSpeed();}
    virtual void setSpeed(const Coord& speed);
    virtual Coord& getAcceleration();
    virtual const Coord& getAcceleration() const {return const_cast<AODVVANETRREQ*>(this)->getAcceleration();}
    virtual void setAcceleration(const Coord& acceleration);
    virtual Coord& getDirection();
    virtual const Coord& getDirection() const {return const_cast<AODVVANETRREQ*>(this)->getDirection();}
    virtual void setDirection(const Coord& direction);
    virtual double getTwr() const;
    virtual void setTwr(double twr);
    virtual double getExpirationtime() const;
    virtual void setExpirationtime(double expirationtime);
};

inline void doPacking(cCommBuffer *b, AODVVANETRREQ& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVVANETRREQ& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>custom/routing/aodvvanet2/AODVVANETControlPackets.msg:84</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODVVANET Route Reply
 * //
 * class AODVVANETRREP extends AODVVANETControlPacket
 * {
 *     unsigned int packetType = RREP;
 *     bool repairFlag;
 *     bool ackRequiredFlag;
 *     unsigned int prefixSize;
 *     unsigned int hopCount;
 *     IPv4Address destAddr;
 *     unsigned int destSeqNum;
 *     IPv4Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     simtime_t lifeTime;
 *     double twr;
 *     double expirationtime;
 * }
 * </pre>
 */
class AODVVANETRREP : public ::AODVVANETControlPacket
{
  protected:
    unsigned int packetType_var;
    bool repairFlag_var;
    bool ackRequiredFlag_var;
    unsigned int prefixSize_var;
    unsigned int hopCount_var;
    IPv4Address destAddr_var;
    unsigned int destSeqNum_var;
    IPv4Address originatorAddr_var;
    unsigned int originatorSeqNum_var;
    simtime_t lifeTime_var;
    double twr_var;
    double expirationtime_var;

  private:
    void copy(const AODVVANETRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVVANETRREP&);

  public:
    AODVVANETRREP(const char *name=NULL);
    AODVVANETRREP(const AODVVANETRREP& other);
    virtual ~AODVVANETRREP();
    AODVVANETRREP& operator=(const AODVVANETRREP& other);
    virtual AODVVANETRREP *dup() const {return new AODVVANETRREP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getAckRequiredFlag() const;
    virtual void setAckRequiredFlag(bool ackRequiredFlag);
    virtual unsigned int getPrefixSize() const;
    virtual void setPrefixSize(unsigned int prefixSize);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<AODVVANETRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual IPv4Address& getOriginatorAddr();
    virtual const IPv4Address& getOriginatorAddr() const {return const_cast<AODVVANETRREP*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const IPv4Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual simtime_t getLifeTime() const;
    virtual void setLifeTime(simtime_t lifeTime);
    virtual double getTwr() const;
    virtual void setTwr(double twr);
    virtual double getExpirationtime() const;
    virtual void setExpirationtime(double expirationtime);
};

inline void doPacking(cCommBuffer *b, AODVVANETRREP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVVANETRREP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>custom/routing/aodvvanet2/AODVVANETControlPackets.msg:103</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODVVANET Route Error
 * //
 * class AODVVANETRERR extends AODVVANETControlPacket
 * {
 *     unsigned int packetType = RERR;
 *     UnreachableNode unreachableNodes[];
 *     bool noDeleteFlag;
 *     unsigned int destCount;
 * }
 * </pre>
 */
class AODVVANETRERR : public ::AODVVANETControlPacket
{
  protected:
    unsigned int packetType_var;
    UnreachableNode *unreachableNodes_var; // array ptr
    unsigned int unreachableNodes_arraysize;
    bool noDeleteFlag_var;
    unsigned int destCount_var;

  private:
    void copy(const AODVVANETRERR& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVVANETRERR&);

  public:
    AODVVANETRERR(const char *name=NULL);
    AODVVANETRERR(const AODVVANETRERR& other);
    virtual ~AODVVANETRERR();
    AODVVANETRERR& operator=(const AODVVANETRERR& other);
    virtual AODVVANETRERR *dup() const {return new AODVVANETRERR(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual void setUnreachableNodesArraySize(unsigned int size);
    virtual unsigned int getUnreachableNodesArraySize() const;
    virtual UnreachableNode& getUnreachableNodes(unsigned int k);
    virtual const UnreachableNode& getUnreachableNodes(unsigned int k) const {return const_cast<AODVVANETRERR*>(this)->getUnreachableNodes(k);}
    virtual void setUnreachableNodes(unsigned int k, const UnreachableNode& unreachableNodes);
    virtual bool getNoDeleteFlag() const;
    virtual void setNoDeleteFlag(bool noDeleteFlag);
    virtual unsigned int getDestCount() const;
    virtual void setDestCount(unsigned int destCount);
};

inline void doPacking(cCommBuffer *b, AODVVANETRERR& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVVANETRERR& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>custom/routing/aodvvanet2/AODVVANETControlPackets.msg:114</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODVVANET Route Reply ACK
 * //
 * class AODVVANETRREPACK extends AODVVANETControlPacket
 * {
 *     unsigned int packetType = RREPACK;
 * }
 * </pre>
 */
class AODVVANETRREPACK : public ::AODVVANETControlPacket
{
  protected:
    unsigned int packetType_var;

  private:
    void copy(const AODVVANETRREPACK& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVVANETRREPACK&);

  public:
    AODVVANETRREPACK(const char *name=NULL);
    AODVVANETRREPACK(const AODVVANETRREPACK& other);
    virtual ~AODVVANETRREPACK();
    AODVVANETRREPACK& operator=(const AODVVANETRREPACK& other);
    virtual AODVVANETRREPACK *dup() const {return new AODVVANETRREPACK(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doPacking(cCommBuffer *b, AODVVANETRREPACK& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AODVVANETRREPACK& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>custom/routing/aodvvanet2/AODVVANETControlPackets.msg:122</tt> by nedtool.
 * <pre>
 * //
 * // Represents a timer for a Route Reply packet
 * //
 * message WaitForVANETRREP
 * {
 *     IPv4Address destAddr;
 *     unsigned int lastTTL;
 *     bool fromInvalidEntry;
 * }
 * </pre>
 */
class WaitForVANETRREP : public ::cMessage
{
  protected:
    IPv4Address destAddr_var;
    unsigned int lastTTL_var;
    bool fromInvalidEntry_var;

  private:
    void copy(const WaitForVANETRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WaitForVANETRREP&);

  public:
    WaitForVANETRREP(const char *name=NULL, int kind=0);
    WaitForVANETRREP(const WaitForVANETRREP& other);
    virtual ~WaitForVANETRREP();
    WaitForVANETRREP& operator=(const WaitForVANETRREP& other);
    virtual WaitForVANETRREP *dup() const {return new WaitForVANETRREP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<WaitForVANETRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getLastTTL() const;
    virtual void setLastTTL(unsigned int lastTTL);
    virtual bool getFromInvalidEntry() const;
    virtual void setFromInvalidEntry(bool fromInvalidEntry);
};

inline void doPacking(cCommBuffer *b, WaitForVANETRREP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, WaitForVANETRREP& obj) {obj.parsimUnpack(b);}


#endif // ifndef _AODVVANETCONTROLPACKETS_M_H_
