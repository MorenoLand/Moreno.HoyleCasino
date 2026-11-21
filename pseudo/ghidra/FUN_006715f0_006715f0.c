// FUN_006715f0  006715f0

void __thiscall FUN_006715f0(int param_1,undefined4 param_2)

{
  char *_Str2;
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char local_64 [80];
  uint local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _Str2 = (char *)FUN_00630f40("SID_SHELL_REWARDS_NORECENTTRIGGER");
  _Str1 = (char *)(**(code **)(**(int **)(param_1 + 0x178) + 0xb8))();
  iVar1 = strcmp(_Str1,_Str2);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x178) + 0xb4))(&PTR_006b27f8);
  }
  for (local_10 = 3; 0 < local_10; local_10 = local_10 + -1) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x174 + local_10 * 4) + 0xb8))();
    (**(code **)(**(int **)(param_1 + 0x178 + local_10 * 4) + 0xb4))(uVar2);
  }
  local_8 = FUN_00634310(param_2,0);
  piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
  local_c = (**(code **)(*piVar3 + 0xf4))(param_2);
  sprintf(local_64,"%s: HB %d.00",local_c,local_8);
  (**(code **)(**(int **)(param_1 + 0x178) + 0xb4))(local_64);
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

