#include <stdio.h> 
#include <stdlib.h> 

typedef unsigned int            FY_U32;

#define SIZE_11M 0xB00000
#define SIZE_10M 0xA00000
#define SIZE_1M  0x100000
#define SIZE_2M  0x200000
#define SIZE_3M  0x300000
#define SIZE_4M  (SIZE_2M+SIZE_2M)
#define SIZE_5M  (SIZE_4M+SIZE_1M)
#define SIZE_16K 0x4000
#define SIZE_32K 0x8000
#define SIZE_1024X544_B 0x88000
#define SIZE_100X100_B 0x2710

static unsigned int cp_minicode_base = 0x07fd00000;

FY_U32	grp_ioe_after_cal_pre_addr[16];
FY_U32  ioe_temp_cal_cur_addr;
FY_U32  ioe_temp_cal_pValue;

int main(int argc, char *argv[]) 
{ 
  /*  FY_U32 ioe_param_addr = 0;
    FY_U32 i = 0;
    ioe_param_addr = (cp_minicode_base - SIZE_10M +SIZE_16K+0x400);         
    ioe_temp_cal_cur_addr = cp_minicode_base - SIZE_10M + SIZE_32K + SIZE_1024X544_B;
    ioe_temp_cal_pValue = ioe_temp_cal_cur_addr + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[0]  = ioe_temp_cal_pValue + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[1]  = grp_ioe_after_cal_pre_addr[0] + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[2]  = grp_ioe_after_cal_pre_addr[1] + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[3]  = grp_ioe_after_cal_pre_addr[2] + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[4]  = grp_ioe_after_cal_pre_addr[3]  + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[5]  = grp_ioe_after_cal_pre_addr[4]  + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[6]  = grp_ioe_after_cal_pre_addr[5]  + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[7]  = grp_ioe_after_cal_pre_addr[6]  + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[8]  = grp_ioe_after_cal_pre_addr[7]  + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[9]  = grp_ioe_after_cal_pre_addr[8]  + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[10] = grp_ioe_after_cal_pre_addr[9]  + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[11] = grp_ioe_after_cal_pre_addr[10] + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[12] = grp_ioe_after_cal_pre_addr[11] + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[13] = grp_ioe_after_cal_pre_addr[12] + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[14] = grp_ioe_after_cal_pre_addr[13] + SIZE_1024X544_B;
    grp_ioe_after_cal_pre_addr[15] = grp_ioe_after_cal_pre_addr[14] + SIZE_1024X544_B;    

    printf("ioe_param_addr = 0x%x\n",ioe_param_addr);
    printf("ioe_temp_cal_cur_addr = 0x%x\n",ioe_temp_cal_cur_addr);
    printf("ioe_temp_cal_pValue = 0x%x\n",ioe_temp_cal_pValue);
    for(i = 0;i<16;i++){
        printf("--------------&grp_ioe_after_cal_pre_addr[%d] = 0x%x\n",i,grp_ioe_after_cal_pre_addr[i]);
    }
    */
    FY_U32 init = 0;
    FY_U32 i = 0;
    FY_U32 ioe_param_addr = 0;
    ioe_param_addr = (cp_minicode_base - SIZE_1M +SIZE_16K+0x400);
	ioe_temp_cal_cur_addr = cp_minicode_base - SIZE_1M + SIZE_32K + SIZE_100X100_B;
	ioe_temp_cal_pValue = ioe_temp_cal_cur_addr + SIZE_100X100_B;
	grp_ioe_after_cal_pre_addr[0]  = ioe_temp_cal_pValue + SIZE_100X100_B;
    for(init = 1;init<32;init++)
    {
        grp_ioe_after_cal_pre_addr[init]  = grp_ioe_after_cal_pre_addr[init-1] + SIZE_100X100_B;
    }
    printf("ioe_param_addr = 0x%x\n",ioe_param_addr);
    printf("ioe_temp_cal_cur_addr = 0x%x\n",ioe_temp_cal_cur_addr);
    printf("ioe_temp_cal_pValue = 0x%x\n",ioe_temp_cal_pValue);
    for(i = 0;i<32;i++){
        printf("--------------&grp_ioe_after_cal_pre_addr[%d] = 0x%x\n",i,grp_ioe_after_cal_pre_addr[i]);
    }
    exit(0); 
}