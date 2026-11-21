// FUN_00421390  00421390

undefined4 * __fastcall FUN_00421390(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e193;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = CaribbeanStudDealScript::vftable;
  if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
    iVar1 = FUN_00637810(4);
    if (1 < iVar1) {
      local_1c = 0;
      goto LAB_00421408;
    }
  }
  local_1c = 1;
LAB_00421408:
  *(undefined1 *)(param_1 + 9) = local_1c;
  ExceptionList = local_10;
  return param_1;
}

