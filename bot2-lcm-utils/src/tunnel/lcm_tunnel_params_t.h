/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifndef _lcm_tunnel_params_t_h
#define _lcm_tunnel_params_t_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _lcm_tunnel_params_t lcm_tunnel_params_t;
struct _lcm_tunnel_params_t
{
    int8_t     udp;
    int32_t    udp_port;
    int32_t    tcp_max_age_ms;
    int32_t    max_delay_ms;
    char*      channels;
    float      fec;
};
 
lcm_tunnel_params_t   *lcm_tunnel_params_t_copy(const lcm_tunnel_params_t *p);
void lcm_tunnel_params_t_destroy(lcm_tunnel_params_t *p);

typedef struct _lcm_tunnel_params_t_subscription_t lcm_tunnel_params_t_subscription_t;
typedef void(*lcm_tunnel_params_t_handler_t)(const lcm_recv_buf_t *rbuf, 
             const char *channel, const lcm_tunnel_params_t *msg, void *user);

int lcm_tunnel_params_t_publish(lcm_t *lcm, const char *channel, const lcm_tunnel_params_t *p);
lcm_tunnel_params_t_subscription_t* lcm_tunnel_params_t_subscribe(lcm_t *lcm, const char *channel, lcm_tunnel_params_t_handler_t f, void *userdata);
int lcm_tunnel_params_t_unsubscribe(lcm_t *lcm, lcm_tunnel_params_t_subscription_t* hid);

int  lcm_tunnel_params_t_encode(void *buf, int offset, int maxlen, const lcm_tunnel_params_t *p);
int  lcm_tunnel_params_t_decode(const void *buf, int offset, int maxlen, lcm_tunnel_params_t *p);
int  lcm_tunnel_params_t_decode_cleanup(lcm_tunnel_params_t *p);
int  lcm_tunnel_params_t_encoded_size(const lcm_tunnel_params_t *p);

// LCM support functions. Users should not call these
int64_t __lcm_tunnel_params_t_get_hash(void);
int64_t __lcm_tunnel_params_t_hash_recursive(const __lcm_hash_ptr *p);
int     __lcm_tunnel_params_t_encode_array(void *buf, int offset, int maxlen, const lcm_tunnel_params_t *p, int elements);
int     __lcm_tunnel_params_t_decode_array(const void *buf, int offset, int maxlen, lcm_tunnel_params_t *p, int elements);
int     __lcm_tunnel_params_t_decode_array_cleanup(lcm_tunnel_params_t *p, int elements);
int     __lcm_tunnel_params_t_encoded_array_size(const lcm_tunnel_params_t *p, int elements);
int     __lcm_tunnel_params_t_clone_array(const lcm_tunnel_params_t *p, lcm_tunnel_params_t *q, int elements);

#ifdef __cplusplus
}
#endif

#endif
