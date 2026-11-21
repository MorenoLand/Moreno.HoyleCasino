// FUN_005e8020  005e8020

void __thiscall FUN_005e8020(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  if ((param_3 < 0) || (9 < param_3)) {
    FUN_005e9f20("(0<=rec) && (rec < HOF_NUM_RECORDS)","..\\Casino\\hof.cpp",0x25b,param_1);
  }
  cVar1 = FUN_005e7f90(param_3,param_4);
  if (cVar1 == '\0') {
    FUN_005e9f20("IsRecordBroken( rec, v )","..\\Casino\\hof.cpp",0x25c,param_1);
  }
  FUN_005e8590(param_3);
  FUN_005e8550(0,param_3);
  *(undefined4 *)(&DAT_0079498c + param_3 * 0xb8) = param_4;
  _strdate(&DAT_00794974 + param_3 * 0xb8);
  iVar2 = FUN_0063aac0(param_1,*(undefined4 *)(*(int *)(DAT_0162ee84 + 0x58) + param_2 * 4));
  strcpy(&DAT_00794940 + param_3 * 0xb8,(char *)(iVar2 + 4));
  FUN_005e8230(param_2,param_3);
  FUN_005e8470(param_3);
  FUN_005e79e0();
  return;
}

