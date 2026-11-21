// FUN_00578dc0  00578dc0

void __thiscall FUN_00578dc0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x18) == 4) {
    iVar2 = tolower((int)*(char *)(param_2 + 0x14));
    switch(iVar2) {
    case 0x62:
      FUN_005f2a60(0x30ef5c,0);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4c))(0x30ef5c,0xffffffff);
      }
      break;
    case 99:
      FUN_005f2a60(0x30ef5a,0);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4c))(0x30ef5a,0xffffffff);
      }
      break;
    case 0x6d:
      FUN_005f2a60(0x30ef5d,0);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4c))(0x30ef5d,0xffffffff);
      }
      break;
    case 0x70:
      FUN_005f2a60(0x30ef5e,0);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4c))(0x30ef5e,0xffffffff);
      }
      break;
    case 0x73:
      FUN_005f2a60(0x30ef5b,0);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4c))(0x30ef5b,0xffffffff);
      }
    }
  }
  FUN_005d7f40(param_2);
  return;
}

