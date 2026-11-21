// FUN_0062d8f0  0062d8f0

undefined4 * __fastcall FUN_0062d8f0(undefined4 *param_1)

{
  FUN_0062ec40();
  *param_1 = StringManager::vftable;
  *(undefined1 *)(param_1 + 0xf) = 0x20;
  *(undefined1 *)((int)param_1 + 0x3d) = 10;
  return param_1;
}

