// FUN_0052cd40  0052cd40

void FUN_0052cd40(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_0079338c[2];
  iVar3 = (**(code **)(*DAT_0079338c + 4))();
  if (iVar1 == iVar3) {
    piVar4 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar4 + 0xd0))();
    piVar4 = (int *)FUN_005fb300(1);
    (**(code **)(*piVar4 + 0xd0))();
    piVar4 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar4 + 0xd0))();
    FUN_005f2ba0(0x30ef5d);
    FUN_005f2ba0(0x30ef5c);
    FUN_005f2ba0(0x30ef5e);
  }
  else {
    piVar4 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar4 + 0xcc))();
    piVar4 = (int *)FUN_005fb300(1);
    (**(code **)(*piVar4 + 0xcc))();
    piVar4 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar4 + 0xcc))();
    FUN_005f2b20(0x30ef5d,1);
    FUN_005f2b20(0x30ef5c,1);
    FUN_005f2b20(0x30ef5e,1);
  }
  if (DAT_0079338c[2] == 0) {
    piVar4 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar4 + 0xd0))();
    FUN_005f2ba0(0x30ef5b);
  }
  else {
    piVar4 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar4 + 0xcc))();
    FUN_005f2b20(0x30ef5b,1);
  }
  if (DAT_0079338c[1] == 0) {
    piVar4 = (int *)FUN_005fb300(4);
    (**(code **)(*piVar4 + 0xd0))();
    FUN_005f2ba0(0x30ef5a);
  }
  else {
    piVar4 = (int *)FUN_005fb300(4);
    (**(code **)(*piVar4 + 0xcc))();
    FUN_005f2b20(0x30ef5a,1);
  }
  piVar4 = (int *)FUN_005fb300(5);
  (**(code **)(*piVar4 + 0xcc))();
  cVar2 = FUN_005d0d60(1);
  if (((cVar2 == '\0') && (DAT_0079338c[1] == 0)) && (DAT_0079338c[2] == 0)) {
    piVar4 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar4 + 0xd0))();
    piVar4 = (int *)FUN_005fb300(1);
    (**(code **)(*piVar4 + 0xd0))();
    piVar4 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar4 + 0xd0))();
    FUN_005f2ba0(0x30ef5d);
    FUN_005f2ba0(0x30ef5c);
    FUN_005f2ba0(0x30ef5e);
    if ((DAT_0079338c[1] == 0) && (DAT_0079338c[2] == 0)) {
      uVar5 = FUN_005dcb00(0);
      FUN_005dbb70(uVar5);
    }
  }
  return;
}

