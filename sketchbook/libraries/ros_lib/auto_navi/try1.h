#ifndef _ROS_auto_navi_try1_h
#define _ROS_auto_navi_try1_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace auto_navi
{

  class try1 : public ros::Msg
  {
    public:
      typedef float _cX_type;
      _cX_type cX;
      typedef float _cY_type;
      _cY_type cY;

    try1():
      cX(0),
      cY(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->cX);
      offset += serializeAvrFloat64(outbuffer + offset, this->cY);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cX));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cY));
     return offset;
    }

    const char * getType(){ return "auto_navi/try1"; };
    const char * getMD5(){ return "bd466dd2a275f04fea16b85b9a5cea50"; };

  };

}
#endif