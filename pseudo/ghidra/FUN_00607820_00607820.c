// FUN_00607820  00607820

undefined4 * __thiscall FUN_00607820(undefined4 *param_1,char *param_2,char *param_3)

{
  FUN_0062aea0();
  *param_1 = VIniFile::vftable;
  strcpy((char *)(param_1 + 2),param_2);
  strcpy((char *)((int)param_1 + 0x107),param_3);
  return param_1;
}

