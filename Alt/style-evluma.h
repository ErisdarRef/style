/**
**************************************************************************************************
  Filename:       x
  Revised:        $ $
  Revision:       $ $

  Description:    

    Main - entry point to Evluma application

    This module implements the twilight store in NV flash memory.  This file is largely ported 
    as-is from TI to Nordic processors.

    Copyright 2017-2020, Evluma.  ALL RIGHTS RESERVED

    Express Imaging Systems, LLC DBA Evluma
    3600 Lind Ave SW
    Renton, Washington  98057
    425-336-5800

**************************************************************************************************/




/*************************************************************************************************/
/** @fcn        int main(void)
 *  @brief      x
 *  @details    x
 *
 *  Section Purpose
 *      x
 *
 *  In:  name   descrip
 *
 *  Out: name   descrip
 *
 *  Return:     (type) descrip
 *
 *  Pre:        x
 *
 *  Post:       x
 *
 *  Section     Operation
 *      x
 *      
 *  Section     Opens
 *      x
 *
 *  Section     Hazards & Risks
 *      x
 *
 *  Section     Todo
 *      x
 *
 *  Section     Timing
 *      x
 *
 *  Note: x
 */
/*************************************************************************************************/




/*********************************************************************************/


/********************* Inline Comment *****************************/


/*********************************************************************

  Unknown platform

*********************************************************************/


// comment - there is a bootloader and we have valid boot settings


                                                  // side comment


static void some_local_fcn(void)
{
    return;
}


/*********************************************************************************/
/*
    Some comment section - On this main thread, there are couple occasions where we 
    might need to do a blocking delay; i.e. delay in-line.  

    !! This can only be used from this main thread (including manufacturing test).
    !! Do not call this code from anything other than this main thread.
*/


/*********************************************************************************/
/**@brief Function for handling the idle state (main loop).
 *
 * @details If there is no pending log operation, then sleep until next the next event occurs.
 */                                               


//*****************************************************************************************

