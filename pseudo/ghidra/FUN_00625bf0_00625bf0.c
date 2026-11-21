// FUN_00625bf0  00625bf0

undefined4 * __fastcall FUN_00625bf0(undefined4 *param_1)

{
  FUN_005ff310();
  *param_1 = sciPane::vftable;
  *(undefined1 *)(param_1 + 0x87) = 1;
  *(undefined1 *)((int)param_1 + 0x21d) = 0;
  return param_1;
}

