#ifndef _LINUX_IF_VLAN_EXT_H_
#define _LINUX_IF_VLAN_EXT_H_

#include <linux/if_vlan.h>

/**
 * eth_type_vlan - check for valid vlan ether type.
 * @ethertype: ether type to check
 *
 * Returns true if the ether type is a vlan ether type.
 */
static inline bool eth_type_vlan(__be16 ethertype)
{
        switch (ethertype) {
        case htons(ETH_P_8021Q):
        case htons(ETH_P_8021AD):
                return true;
        default:
                return false;
        }
}

#endif // end of _LINUX_IF_VLAN_EXT_H_
