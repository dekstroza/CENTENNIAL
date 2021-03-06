
#ifndef _H_y_CoreModel_CoreNetworkModule_ObjectClasses
#define _H_y_CoreModel_CoreNetworkModule_ObjectClasses
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.5-5

    Yuma SIL header
    module CoreModel-CoreNetworkModule-ObjectClasses
    revision 2016-03-27
    namespace uri:onf:CoreModel-CoreNetworkModule-ObjectClasses

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_CoreModel_CoreNetworkModule_ObjectClasses_M_CoreModel_CoreNetworkModule_ObjectClasses (const xmlChar *)"CoreModel-CoreNetworkModule-ObjectClasses"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_R_CoreModel_CoreNetworkModule_ObjectClasses (const xmlChar *)"2016-03-27"

#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_NetworkElement (const xmlChar *)"NetworkElement"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N__clientLtpRefList (const xmlChar *)"_clientLtpRefList"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N__lpList (const xmlChar *)"_lpList"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N__ltpRefList (const xmlChar *)"_ltpRefList"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N__serverLtpRefList (const xmlChar *)"_serverLtpRefList"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_administrativeControl (const xmlChar *)"administrativeControl"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_adminsatratveState (const xmlChar *)"adminsatratveState"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_configuredClientCapacity (const xmlChar *)"configuredClientCapacity"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_layerProtocolName (const xmlChar *)"layerProtocolName"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_lifecycleState (const xmlChar *)"lifecycleState"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_localIdList (const xmlChar *)"localIdList"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_lpDirection (const xmlChar *)"lpDirection"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_ltpDirection (const xmlChar *)"ltpDirection"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_nameList (const xmlChar *)"nameList"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_operationalState (const xmlChar *)"operationalState"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_physicalPortReference (const xmlChar *)"physicalPortReference"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_terminationState (const xmlChar *)"terminationState"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_uuid (const xmlChar *)"uuid"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_value (const xmlChar *)"value"
#define y_CoreModel_CoreNetworkModule_ObjectClasses_N_valueName (const xmlChar *)"valueName"
/********************************************************************
* FUNCTION y_CoreModel_CoreNetworkModule_ObjectClasses_init
* 
* initialize the CoreModel-CoreNetworkModule-ObjectClasses server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_CoreModel_CoreNetworkModule_ObjectClasses_init (
    const xmlChar *modname,
    const xmlChar *revision);

/********************************************************************
* FUNCTION y_CoreModel_CoreNetworkModule_ObjectClasses_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_CoreModel_CoreNetworkModule_ObjectClasses_init2 (void);

/********************************************************************
* FUNCTION y_CoreModel_CoreNetworkModule_ObjectClasses_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_CoreModel_CoreNetworkModule_ObjectClasses_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif