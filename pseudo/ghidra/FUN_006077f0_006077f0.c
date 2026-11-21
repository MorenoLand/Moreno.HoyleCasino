// FUN_006077f0  006077f0

undefined4 * __fastcall FUN_006077f0(undefined4 *param_1)

{
  FUN_0062aea0();
  *param_1 = VIniFile::vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0x107) = 0;
  return param_1;
}

