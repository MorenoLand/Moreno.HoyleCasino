// FUN_006898a0  006898a0

void __fastcall FUN_006898a0(undefined4 *param_1)

{
  *param_1 = Application::vftable;
  CoUninitialize();
  operator_delete__(DAT_01631bb8);
  operator_delete__(DAT_01631bbc);
  operator_delete__(DAT_01631bc0);
  FUN_00624ef0();
  return;
}

