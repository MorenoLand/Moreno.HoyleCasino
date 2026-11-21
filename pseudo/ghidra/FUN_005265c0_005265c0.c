// FUN_005265c0  005265c0

void FUN_005265c0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  char local_17d;
  char local_17c [80];
  undefined1 local_12c [28];
  int local_110;
  char local_10c [256];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_17d = '\0';
  FUN_005ef310(0x11);
  uVar4 = extraout_var;
  FUN_005ef340(5,0);
  local_10c[0] = '\0';
  local_110 = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (*(int *)(param_7 + local_8 * 0x1e0) != 0) {
      local_17d = local_17d + '\x01';
      uVar3 = FUN_0064c8a0(*(undefined4 *)(*(int *)(param_1 + 0x178) + 0x48 + local_8 * 0x20),
                           *(undefined4 *)(*(int *)(param_1 + 0x178) + 0x4c + local_8 * 0x20),uVar4)
      ;
      FUN_0064c8d0(uVar3,local_12c,1,1,0);
      uVar1 = FUN_005dcb00(local_8);
      iVar2 = FUN_0063aac0(local_12c,uVar4,uVar1);
      sprintf(local_17c,"%s: %s\n",iVar2 + 4);
      strcat(local_10c,local_17c);
      FUN_005ecc60(300);
      (**(code **)(*param_4 + 0xb4))(local_17c);
      iVar2 = FUN_005ef050();
      if (local_110 < iVar2) {
        local_110 = FUN_005ef050();
      }
    }
  }
  FUN_005eccb0(local_17d * 0x12);
  FUN_005ecc60(local_110 + 10);
  (**(code **)(*param_4 + 0xb4))(local_10c);
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

