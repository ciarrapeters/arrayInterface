//lang::CwC

#pragma once

#include <stdlib.h>

/**
 * @brief      This class describes an array of objects.
 */
class Array : public Object {
    public:
        /**
         * @brief      Constructs a new instance.
         */
        Array(size_t length) {}

        /**
         * @brief      Destroys the object.
         */
        ~Array() {}

        /**
         * @brief      returns the length of the array
         *
         * @return     the length of the array
         */
        size_t length();

        /**
         * @brief      Searches for the first match and returns the index of it. 
         *             Returns the size of the array if the object cannot be found.
         *
         * @param      obj   The object
         *
         * @return     the index of the first match of the given object
         */
        size_t index_of(Object* obj);

        /**
         * @brief      Stores the given object at the given index in the array. 
         *             Replaces previous element stored there.
         *
         * @param      obj   The object
         * @param[in]  idx   The index
         */
        void set(Object* obj, size_t idx);

        /**
         * @brief      Gets the object at the specified index.
         *
         * @param[in]  idx   The index
         *
         * @return     the object stored at the given index in the array
         */
        Object* get(size_t idx);

        /**
         * @brief      Removes the object at the specified index.
         *
         * @param[in]  idx   The index
         *
         * @return     the object that was removed
         */
        Object* remove(size_t idx);

        /**
         * @brief      Adds the given object to the next available index (at the end of the array)
         *
         * @param      obj   The object
         */
        void push(Object* obj);

        /**
         * @brief      resizes the array to the given size, discarding elements that no longer fit
         *
         * @param[in]  size  The new size of the array
         */
        void resize(size_t size);
};