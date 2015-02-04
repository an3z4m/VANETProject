//
// Generated file, do not edit! Created by opp_msgc 4.4 from veins/modules/messages/WaveShortMessage.msg.
//

#ifndef _WAVESHORTMESSAGE_M_H_
#define _WAVESHORTMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0404
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "veins/base/utils/Coord.h"
// }}



/**
 * Class generated from <tt>veins/modules/messages/WaveShortMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet WaveShortMessage {
 * 	
 * 	int wsmVersion = 0;
 * 	
 * 	int securityType = 0;
 * 	
 * 	int channelNumber;
 * 	
 * 	int dataRate = 1;
 * 	
 * 	int priority = 3;
 * 	
 * 	int psid = 0;
 * 	
 * 	string psc = "Service with some Data";
 * 	
 * 	int wsmLength;
 * 	
 * 	string wsmData = "Some Data";
 * 
 * 	int senderAddress = 0;
 * 	int recipientAddress = -1;
 * 	int serial = 0;
 * 	Coord senderPos;
 * 	simtime_t timestamp = 0;
 * }
 * </pre>
 */
class WaveShortMessage : public ::cPacket
{
  protected:
    int wsmVersion_var;
    int securityType_var;
    int channelNumber_var;
    int dataRate_var;
    int priority_var;
    int psid_var;
    opp_string psc_var;
    int wsmLength_var;
    opp_string wsmData_var;
    int senderAddress_var;
    int recipientAddress_var;
    int serial_var;
    Coord senderPos_var;
    simtime_t timestamp_var;

  private:
    void copy(const WaveShortMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WaveShortMessage&);

  public:
    WaveShortMessage(const char *name=NULL, int kind=0);
    WaveShortMessage(const WaveShortMessage& other);
    virtual ~WaveShortMessage();
    WaveShortMessage& operator=(const WaveShortMessage& other);
    virtual WaveShortMessage *dup() const {return new WaveShortMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getWsmVersion() const;
    virtual void setWsmVersion(int wsmVersion);
    virtual int getSecurityType() const;
    virtual void setSecurityType(int securityType);
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber);
    virtual int getDataRate() const;
    virtual void setDataRate(int dataRate);
    virtual int getPriority() const;
    virtual void setPriority(int priority);
    virtual int getPsid() const;
    virtual void setPsid(int psid);
    virtual const char * getPsc() const;
    virtual void setPsc(const char * psc);
    virtual int getWsmLength() const;
    virtual void setWsmLength(int wsmLength);
    virtual const char * getWsmData() const;
    virtual void setWsmData(const char * wsmData);
    virtual int getSenderAddress() const;
    virtual void setSenderAddress(int senderAddress);
    virtual int getRecipientAddress() const;
    virtual void setRecipientAddress(int recipientAddress);
    virtual int getSerial() const;
    virtual void setSerial(int serial);
    virtual Coord& getSenderPos();
    virtual const Coord& getSenderPos() const {return const_cast<WaveShortMessage*>(this)->getSenderPos();}
    virtual void setSenderPos(const Coord& senderPos);
    virtual simtime_t getTimestamp() const;
    virtual void setTimestamp(simtime_t timestamp);
};

inline void doPacking(cCommBuffer *b, WaveShortMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, WaveShortMessage& obj) {obj.parsimUnpack(b);}


#endif // _WAVESHORTMESSAGE_M_H_
