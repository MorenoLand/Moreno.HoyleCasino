// FUN_004325a0  004325a0

void __thiscall FUN_004325a0(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_128 [28];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_005dcb00(param_3,param_1);
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 != 0) {
    uVar5 = FUN_0064c8a0(*(undefined4 *)
                          (*(int *)(param_2 + 0x178) + 0x48 + param_3 * 0x20 + param_4 * 8),
                         *(undefined4 *)
                          (*(int *)(param_2 + 0x178) + param_3 * 0x20 + 0x4c + param_4 * 8));
    FUN_0064c8d0(uVar5,local_128,1,1,0);
    uVar3 = FUN_005dcb00(param_3,param_1);
    iVar4 = FUN_0063aac0(local_128,param_1,uVar3,uVar1);
    sprintf(local_10c,"%s: %s",iVar4 + 4);
    FUN_005ecc60(300);
    (**(code **)(*param_5 + 0xb4))(local_10c);
    iVar4 = FUN_005ef050();
    FUN_005ecc60(iVar4 + 0x14);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

