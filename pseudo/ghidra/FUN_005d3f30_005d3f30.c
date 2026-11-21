// FUN_005d3f30  005d3f30

void __thiscall FUN_005d3f30(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  char *_Str1;
  int iVar3;
  void *pvVar4;
  char *_Str2;
  undefined4 local_c4;
  int local_ac;
  char local_a8 [132];
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8ef0;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = uVar2;
  FUN_005d4280(local_a8,param_2);
  if ((*(int *)(param_1 + 0x88) != 0) && (cVar1 = FUN_005f54a0(uVar2), cVar1 != '\0')) {
    _Str2 = local_a8;
    _Str1 = (char *)(**(code **)(**(int **)(param_1 + 0x88) + 0xb8))();
    iVar3 = strcmp(_Str1,_Str2);
    if (iVar3 == 0) goto LAB_005d41dd;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    pvVar4 = operator_new(0x1d4);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_c4 = 0;
    }
    else {
      local_c4 = FUN_005cd360();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x88) = local_c4;
  }
  FUN_005ec8f0(local_a8,4,0x41,0xf,0,0,5000,0x30,0xffffffff);
  iVar3 = FUN_005eef60();
  iVar3 = iVar3 + 10;
  FUN_005ecc60(iVar3);
  local_20 = FUN_005ef440();
  FUN_005eccb0(local_20);
  FUN_005ee8c0(0xe6,0xe6,0xff);
  local_18 = FUN_005f8930();
  local_14 = FUN_005f8950();
  local_1c = (local_14 - local_20) + -0x12;
  if (local_1c < 0) {
    local_1c = 0;
  }
  if (0x1e0 < local_1c + local_20) {
    local_1c = 0x1e0 - local_20;
  }
  local_ac = local_18;
  if (local_18 < 0) {
    local_ac = 0;
  }
  if (0x280 < local_ac + iVar3) {
    local_ac = 0x280 - iVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x88) + 0x44))(local_ac,local_1c);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x74))();
LAB_005d41dd:
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}

