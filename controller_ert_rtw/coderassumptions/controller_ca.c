/*
 * File: controller_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "controller_ca.h"

CA_HWImpl_TestResults CA_controller_HWRes;
CA_PWS_TestResults CA_controller_PWSRes;
const CA_HWImpl CA_controller_ExpHW = {
  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  32,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  64,                                  /* BitPerPointer */
  64,                                  /* BitPerSizeT */
  64,                                  /* BitPerPtrDiffT */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */
  1,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "MATLAB Host",                       /* HWDeviceType */
  0                                    /* MemoryAtStartup */
};

CA_HWImpl CA_controller_ActHW;
void controller_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_controller_ActHW, &CA_controller_ExpHW,
    &CA_controller_PWSRes);
  caVerifyHWImpl(&CA_controller_ActHW, &CA_controller_ExpHW,
                 &CA_controller_HWRes);
}
