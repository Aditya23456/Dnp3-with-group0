//
// Created by aditya on 11/20/16.
//

#ifndef OPENDNP3_CHARSERIALIZATION_H_H
#define OPENDNP3_CHARSERIALIZATION_H_H
#include <sstream>
#include <vector>
#include <openpal/container/RSlice.h>
namespace openpal
{
    template <class T>
    class Character
    {
    public:

        static T Read(const uint8_t* pStart)
        {

         //char one = static_cast<char>(value);
            return (*pStart);
        }

     /*   static void ReadBuffer( char* name,RSlice& buffer)
        {
            int length=buffer.Size();
          //  char name[length];
            for (int i=0; i<=length; i++)
            {
                int ret = Read(buffer);
                char value=static_cast<char>(ret);
                name[i]= value;
                buffer.Advance(SIZE);
            }
            //return name;
        } */

        static char ReadBuffer(RSlice& buffer)
        {
            int length=buffer.Size();
            char name[length];

            for (int i=0; i<=length; i++)
            {

                int ret = Read(buffer);
                char value=static_cast<char>(ret);
                name[i]= value;
                buffer.Advance(SIZE);
            }
            return name[0];
        }

        const static size_t SIZE = 1;


        typedef T Type;
    };

}

#endif //OPENDNP3_CHARSERIALIZATION_H_H
