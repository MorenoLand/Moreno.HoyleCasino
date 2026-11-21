// FUN_005a8730  005a8730

void __thiscall FUN_005a8730(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_005b4f00(param_1);
  uVar3 = FUN_005b4e50(uVar2);
  if (param_2 == '\0') {
    FUN_005f2ba0(0x3154ea);
    FUN_005f2ba0(0x3154eb);
    FUN_005f2ba0(0x3154ec);
    FUN_005f2ba0(0x3154ed);
    FUN_005f2ba0(0x3154ee);
  }
  else {
    FUN_005f2b20(0x3154ea,1);
    FUN_005f2b20(0x3154eb,1);
    FUN_005f2b20(0x3154ec,1);
    FUN_005f2b20(0x3154ed,1);
    FUN_005f2b20(0x3154ee,1);
    cVar1 = FUN_005b3430(uVar2);
    if (cVar1 == '\0') {
      FUN_005f2ba0(0x3154ec);
    }
    cVar1 = FUN_005b3710(uVar2,uVar3);
    if (cVar1 == '\0') {
      FUN_005f2ba0(0x3154ed);
    }
    cVar1 = FUN_005b37f0(uVar2);
    if (cVar1 == '\0') {
      FUN_005f2ba0(0x3154ee);
    }
  }
  return;
}

