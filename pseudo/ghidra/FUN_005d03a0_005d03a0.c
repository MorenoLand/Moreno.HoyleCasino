// FUN_005d03a0  005d03a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d03a0(int *param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  
  iVar2 = FUN_005fc360();
  if (iVar2 == 0) {
    strcpy((char *)(DAT_007947d4 + 0x1c8),(char *)&PTR_006b27f8);
    iVar2 = FUN_0063aac0();
    sVar3 = strlen((char *)(iVar2 + 4));
    *(size_t *)(DAT_007947d4 + 0x1fc) = sVar3;
    (**(code **)(*param_1 + 8))(1,10);
  }
  else if (iVar2 == 1) {
    cVar1 = FUN_005d0260();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 8))(2,10);
    }
    else {
      (**(code **)(*param_1 + 8))(1,10);
    }
    (**(code **)(*DAT_0162ee84 + 0x80))(0x186a5,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  else if (iVar2 == 2) {
    piVar4 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar4 + 0x74))();
    if (*(char *)((int)DAT_0162ee84 + 0x25) != '\0') {
      piVar4 = (int *)FUN_005fb300(0);
      (**(code **)(*piVar4 + 0xc0))();
    }
  }
  return;
}

