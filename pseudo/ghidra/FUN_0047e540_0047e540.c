// FUN_0047e540  0047e540

void __thiscall FUN_0047e540(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0047f950(param_1);
    if (iVar1 <= local_8) break;
    FUN_0047e390(local_8);
    FUN_004da3a0();
    FUN_0047e390(local_8);
    FUN_004da450();
    FUN_0047e390(local_8);
    FUN_004da4b0();
    FUN_0047e390(local_8);
    FUN_004da890();
    FUN_0047e390(local_8);
    FUN_004db610();
    FUN_0047e390(local_8);
    FUN_004dc490();
    if (param_2 != '\0') {
      FUN_0047e390(local_8);
      FUN_004c6b10();
    }
    local_8 = local_8 + 1;
  }
  FUN_0047f090();
  if (param_2 != '\0') {
    FUN_0047ecd0();
    FUN_0047ec10();
  }
  FUN_0047e650();
  FUN_0047e6a0();
  return;
}

