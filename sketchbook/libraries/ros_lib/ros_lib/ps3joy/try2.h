#ifndef _ROS_ps3joy_try2_h
#define _ROS_ps3joy_try2_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace ps3joy
{

  class try2 : public ros::Msg
  {
    public:
      typedef int64_t _forward_speed_type;
      _forward_speed_type forward_speed;
      typedef int64_t _backward_speed_type;
      _backward_speed_type backward_speed;

    try2():
      forward_speed(0),
      backward_speed(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_forward_speed;
      u_forward_speed.real = this->forward_speed;
      *(outbuffer + offset + 0) = (u_forward_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_forward_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_forward_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_forward_speed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_forward_speed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_forward_speed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_forward_speed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_forward_speed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->forward_speed);
      union {
        int64_t real;
        uint64_t base;
      } u_backward_speed;
      u_backward_speed.real = this->backward_speed;
      *(outbuffer + offset + 0) = (u_backward_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_backward_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_backward_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_backward_speed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_backward_speed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_backward_speed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_backward_speed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_backward_speed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->backward_speed);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_forward_speed;
      u_forward_speed.base = 0;
      u_forward_speed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_forward_speed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_forward_speed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_forward_speed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_forward_speed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_forward_speed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_forward_speed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_forward_speed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->forward_speed = u_forward_speed.real;
      offset += sizeof(this->forward_speed);
      union {
        int64_t real;
        uint64_t base;
      } u_backward_speed;
      u_backward_speed.base = 0;
      u_backward_speed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_backward_speed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_backward_speed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_backward_speed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_backward_speed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_backward_speed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_backward_speed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_backward_speed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->backward_speed = u_backward_speed.real;
      offset += sizeof(this->backward_speed);
     return offset;
    }

    const char * getType(){ return "ps3joy/try2"; };
    const char * getMD5(){ return "a699297f96ff3ce6d6e9694c1dea07b8"; };

  };

}
#endif