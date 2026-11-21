// FUN_005e1100  005e1100

void __fastcall FUN_005e1100(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char local_528 [16];
  FILE *local_518;
  int local_514;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a960f;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_005d4cf0(uVar1,param_1);
  local_8 = 0;
  for (local_514 = 0; local_514 < 100; local_514 = local_514 + 1) {
    sprintf(local_528,"user%d.log",local_514);
    local_518 = (FILE *)FUN_005ea9c0(local_528,&DAT_006c2d28);
    if (local_518 != (FILE *)0x0) {
      fclose(local_518);
      FUN_0063ab10(local_528);
      iVar2 = FUN_0063aac0();
      iVar2 = iVar2 + 4;
      iVar3 = FUN_005d52e0(uVar1,param_1,iVar2);
      FUN_005e1240(iVar2,iVar3 + 0x60);
    }
  }
  local_8 = 0xffffffff;
  FUN_005d4f50();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

