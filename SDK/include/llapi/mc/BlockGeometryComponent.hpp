/**
 * @file  BlockGeometryComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockGeometryComponent.
 *
 */
struct BlockGeometryComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKGEOMETRYCOMPONENT
public:
    struct BlockGeometryComponent& operator=(struct BlockGeometryComponent const &) = delete;
    BlockGeometryComponent(struct BlockGeometryComponent const &) = delete;
    BlockGeometryComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKGEOMETRYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockGeometryComponent();
#endif
    /**
     * @symbol ??0BlockGeometryComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockGeometryComponent(struct BlockGeometryComponent &&);
    /**
     * @symbol ??4BlockGeometryComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockGeometryComponent & operator=(struct BlockGeometryComponent &&);

};