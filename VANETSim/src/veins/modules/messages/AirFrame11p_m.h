//
// Generated file, do not edit! Created by opp_msgc 4.4 from veins/modules/messages/AirFrame11p.msg.
//

#ifndef _AIRFRAME11P_M_H_
#define _AIRFRAME11P_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0404
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "veins/base/messages/AirFrame_m.h"
using Veins::AirFrame;
// }}



/**
 * Class generated from <tt>veins/modules/messages/AirFrame11p.msg</tt> by opp_msgc.
 * <pre>
 * message AirFrame11p extends AirFrame {
 *     bool underSensitivity = false;
 *     bool wasTransmitting = false;
 * }
 * </pre>
 */
class AirFrame11p : public ::AirFrame
{
  protected:
    bool underSensitivity_var;
    bool wasTransmitting_var;

  private:
    void copy(const AirFrame11p& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AirFrame11p&);

  public:
    AirFrame11p(const char *name=NULL, int kind=0);
    AirFrame11p(const AirFrame11p& other);
    virtual ~AirFrame11p();
    AirFrame11p& operator=(const AirFrame11p& other);
    virtual AirFrame11p *dup() const {return new AirFrame11p(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getUnderSensitivity() const;
    virtual void setUnderSensitivity(bool underSensitivity);
    virtual bool getWasTransmitting() const;
    virtual void setWasTransmitting(bool wasTransmitting);
};

inline void doPacking(cCommBuffer *b, AirFrame11p& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AirFrame11p& obj) {obj.parsimUnpack(b);}


#endif // _AIRFRAME11P_M_H_
