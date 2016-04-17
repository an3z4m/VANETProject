//
// Generated file, do not edit! Created by nedtool 4.6 from veins/base/messages/AirFrame.msg.
//

#ifndef _VEINS_AIRFRAME_M_H_
#define _VEINS_AIRFRAME_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "veins/base/phyLayer/Signal_.h"
// }}


namespace Veins {

/**
 * Class generated from <tt>veins/base/messages/AirFrame.msg:33</tt> by nedtool.
 * <pre>
 * packet AirFrame
 * {
 *     Signal signal;		// Contains the physical data of this AirFrame
 * 
 *     simtime_t duration;	// time the AirFrames takes to be transmited (without propagation delay)
 * 
 *     int state = 1; 		// state of the AirFrames, used by the physical layer
 *         					// as state machine for delay and transmission duration
 *         					// simulation
 * 
 *     int type = 0;		// If type isn't null then this is a control-AirFrame
 *         					// and type specifies the control type.
 * 
 *     long id;			// Unique ID of the AirFrame used as identifier for
 * 							// related control-AirFrames
 * 
 *     int protocolId;		//the id of the phy protocol of this airframe
 * 
 *     int channel;    	//the channel of the radio used for this transmission
 * }
 * </pre>
 */
class AirFrame : public ::cPacket
{
  protected:
    Signal signal_var;
    simtime_t duration_var;
    int state_var;
    int type_var;
    long id_var;
    int protocolId_var;
    int channel_var;

  private:
    void copy(const AirFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AirFrame&);

  public:
    AirFrame(const char *name=NULL, int kind=0);
    AirFrame(const AirFrame& other);
    virtual ~AirFrame();
    AirFrame& operator=(const AirFrame& other);
    virtual AirFrame *dup() const {return new AirFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual Signal& getSignal();
    virtual const Signal& getSignal() const {return const_cast<AirFrame*>(this)->getSignal();}
    virtual void setSignal(const Signal& signal);
    virtual simtime_t getDuration() const;
    virtual void setDuration(simtime_t duration);
    virtual int getState() const;
    virtual void setState(int state);
    virtual int getType() const;
    virtual void setType(int type);
    virtual long getId() const;
    virtual void setId(long id);
    virtual int getProtocolId() const;
    virtual void setProtocolId(int protocolId);
    virtual int getChannel() const;
    virtual void setChannel(int channel);
};

inline void doPacking(cCommBuffer *b, AirFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AirFrame& obj) {obj.parsimUnpack(b);}

} // namespace Veins

#endif // ifndef _VEINS_AIRFRAME_M_H_

