// FUN_00628540  00628540

void __thiscall
FUN_00628540(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
            undefined4 param_19,undefined4 param_20,int param_21,int param_22,int param_23,
            int param_24,int param_25,int param_26,int param_27,int param_28,undefined1 param_29,
            undefined1 param_30,undefined1 param_31,undefined4 param_32,undefined4 param_33)

{
  int iVar1;
  int local_8;
  
  FUN_00614b60(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
               param_33);
  param_1[0x28] = param_21;
  param_1[0x29] = param_22;
  param_1[0x26] = param_23;
  param_1[0x27] = param_24;
  param_1[0x2f] = param_25;
  param_1[0x2a] = param_26;
  param_1[0x2b] = param_27;
  param_1[0x2c] = param_28;
  *(undefined1 *)(param_1 + 0x2d) = param_29;
  *(undefined1 *)((int)param_1 + 0xb5) = param_30;
  *(undefined1 *)((int)param_1 + 0xb6) = param_31;
  FUN_00629220(param_32,0);
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xbc))();
    if (iVar1 <= local_8) break;
    iVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
    *(int *)(iVar1 + 4) = param_1[1];
    FUN_005ec8f0(&PTR_006b27f8,param_1[0x2a],param_1[0x26],param_1[0x27],param_3 + param_1[0x28],
                 param_4 + param_1[0x29] + local_8 * param_1[0x27],param_5 + 2,0x11,0xffffffff);
    FUN_005ef340(param_1[0x2e],0);
    FUN_0060c840(iVar1);
    local_8 = local_8 + 1;
  }
  return;
}

