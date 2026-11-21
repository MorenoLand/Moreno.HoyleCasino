// FUN_0063a4d0  0063a4d0

void __fastcall FUN_0063a4d0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *_Dst;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abb0e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Dst = (undefined4 *)FUN_0063aac0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  memset(_Dst,0,0x37c);
  *_Dst = 0;
  *(undefined1 *)(_Dst + 1) = 0;
  *(undefined1 *)(_Dst + 0xe) = 0;
  _Dst[0x15] = 0;
  *(undefined1 *)(_Dst + 0x16) = 1;
  *(undefined1 *)((int)_Dst + 0x59) = 1;
  *(undefined1 *)((int)_Dst + 0x5a) = 1;
  *(undefined1 *)((int)_Dst + 0x5b) = 3;
  *(undefined1 *)(_Dst + 0x17) = 5;
  uVar1 = (**(code **)(*DAT_0162ee84 + 0xb8))();
  *(undefined1 *)(_Dst + 0xde) = uVar1;
  *(undefined1 *)((int)_Dst + 0x25d) = 1;
  _Dst[0x98] = 5;
  uVar3 = (**(code **)(*DAT_0162ee84 + 0x180))(0);
  _Dst[0x99] = uVar3;
  uVar3 = (**(code **)(*DAT_0162ee84 + 0x1a0))();
  _Dst[0xdb] = uVar3;
  uVar3 = (**(code **)(*DAT_0162ee84 + 0x1b8))();
  _Dst[0xdc] = uVar3;
  _Dst[0xdd] = 0xffffffff;
  local_14 = 0;
  while( true ) {
    iVar4 = (**(code **)(*DAT_0162ee84 + 0xec))();
    if (iVar4 <= local_14) break;
    *(undefined1 *)((int)_Dst + local_14 + 0x268) = 1;
    uVar1 = (**(code **)(*DAT_0162ee84 + 0x100))(local_14);
    *(undefined1 *)((int)_Dst + local_14 + 0x5d) = uVar1;
    local_14 = local_14 + 1;
  }
  *(undefined1 *)(_Dst + 0xda) = 0;
  cVar2 = (**(code **)(*DAT_0162ee84 + 0xdc))();
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x24) == 0)) {
    pvVar5 = operator_new(0xb04);
    local_8 = 0;
    if (pvVar5 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_0066f8b0(param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = local_28;
  }
  local_14 = 0;
  while( true ) {
    iVar4 = (**(code **)(*DAT_0162ee84 + 0x168))();
    if (iVar4 <= local_14) break;
    *(undefined1 *)((int)_Dst + local_14 + 0x15d) = 0;
    local_14 = local_14 + 1;
  }
  ExceptionList = local_10;
  return;
}

