// FUN_005ccfd0  005ccfd0

void __thiscall FUN_005ccfd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_15c;
  undefined1 local_13c [28];
  int local_120;
  int local_11c;
  char local_118 [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8b6a;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = param_1[0x5e] + 0x48 + param_2 * 0x20;
  local_120 = *(int *)(iVar1 + param_3 * 8);
  local_11c = *(int *)(iVar1 + 4 + param_3 * 8);
  if (param_1[0x2b7] != 0) {
    (**(code **)(*(int *)param_1[0x2b7] + 0x70))(local_14);
  }
  cVar2 = FUN_005de860();
  if ((cVar2 != '\0') && ((local_120 != 0 || (local_11c != 0)))) {
    if (param_1[0x2b7] == 0) {
      pvVar3 = operator_new(0x1d4);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_15c = 0;
      }
      else {
        local_15c = FUN_005cd360();
      }
      local_8 = 0xffffffff;
      param_1[0x2b7] = local_15c;
      FUN_005ec8f0(&PTR_006b27f8,4,0x41,0xf,0,0,3000,0x30,0xffffffff);
      FUN_005ee8c0(0xff,0xff,0xcc);
    }
    if ((DAT_007947e4 == (int *)0x0) ||
       (cVar2 = (**(code **)(*DAT_007947e4 + 0x284))
                          (param_1,param_2,param_3,param_1[0x2b7],local_120,local_11c,param_1 + 0x5f
                          ), cVar2 == '\0')) {
      if (local_120 < 1000000) {
        FUN_005ecc60(0x41);
      }
      else {
        FUN_005ecc60(0x55);
      }
      uVar5 = FUN_0064c8a0(local_120,local_11c);
      FUN_0064c8d0(uVar5,local_13c,1,1,0);
      sprintf(local_118,"%s",local_13c);
      (**(code **)(*(int *)param_1[0x2b7] + 0xb4))(local_118);
    }
    uVar4 = (**(code **)(*param_1 + 0xe8))(param_2,param_3);
    uVar4 = (**(code **)(*param_1 + 0xe4))(param_2,param_3,uVar4);
    (**(code **)(*(int *)param_1[0x2b7] + 0x44))(uVar4);
    (**(code **)(*(int *)param_1[0x2b7] + 0x74))();
    (**(code **)(*DAT_007947e4 + 0x280))(param_1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

