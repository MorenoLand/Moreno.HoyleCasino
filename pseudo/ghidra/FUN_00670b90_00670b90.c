// FUN_00670b90  00670b90

void __fastcall FUN_00670b90(int *param_1)

{
  char cVar1;
  undefined1 local_28 [28];
  uint local_c;
  undefined4 local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xdc))();
  if (cVar1 != '\0') {
    if ((char)param_1[0x61] == '\0') {
      cVar1 = FUN_006378e0();
      if (cVar1 == '\0') {
        FUN_005eb5a0();
        (**(code **)(*(int *)param_1[100] + 0x70))();
        (**(code **)(*(int *)param_1[99] + 0x70))();
        (**(code **)(*(int *)param_1[0x65] + 0x70))();
      }
      else {
        FUN_005eaf00(2600000);
        FUN_005eb570();
        (**(code **)(*(int *)param_1[100] + 0x74))();
        (**(code **)(*(int *)param_1[99] + 0x44))(0x1e1,0x245);
        FUN_006375b0();
        local_8 = FUN_00670360();
        FUN_006347c0(local_28,local_8);
        FUN_005ee710(local_28);
        (**(code **)(*(int *)param_1[99] + 0x74))();
        FUN_00671430(0);
      }
      (**(code **)(*(int *)param_1[0x62] + 0xcc))();
      (**(code **)(*(int *)param_1[0x62] + 0x74))();
    }
    else {
      (**(code **)(*param_1 + 0x70))();
      (**(code **)(*(int *)param_1[0x62] + 0xd0))();
      cVar1 = FUN_006378e0();
      FUN_005eaf00((cVar1 != '\0') + 0x27ac48);
      FUN_005eb570();
      (**(code **)(*(int *)param_1[0x66] + 0x70))();
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

