// FUN_00689db0  00689db0

undefined4 * __fastcall FUN_00689db0(undefined4 *param_1)

{
  FUN_0062aea0();
  *param_1 = VTimer::vftable;
  *param_1 = Timer::vftable;
  timeGetDevCaps((LPTIMECAPS)&DAT_01631bcc,8);
  return param_1;
}

