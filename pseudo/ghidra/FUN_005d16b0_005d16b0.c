// FUN_005d16b0  005d16b0

void __thiscall FUN_005d16b0(int param_1,int param_2)

{
  undefined4 local_28 [9];
  
  local_28[0] = 0xffffffff;
  local_28[1] = 0x30d464;
  local_28[2] = 0x30d465;
  local_28[3] = 0x30d466;
  local_28[4] = 0x30d467;
  local_28[5] = 0x30d468;
  local_28[6] = 0x30d469;
  local_28[7] = 0x30d46a;
  local_28[8] = 0x30d46b;
  if (*(int *)(param_1 + 0x80) != param_2) {
    FUN_005f1ad0(local_28[param_2]);
    *(int *)(param_1 + 0x80) = param_2;
    FUN_005d1db0();
    FUN_005d2220();
    FUN_005d3b10();
    FUN_005d4200();
  }
  return;
}

