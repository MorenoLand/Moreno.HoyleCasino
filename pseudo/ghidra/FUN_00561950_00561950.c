// FUN_00561950  00561950

void __fastcall FUN_00561950(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(**(int **)(param_1 + 200) + 0x74))();
  if (*(int *)(DAT_0079343c + 4) < 999999) {
    FUN_00565a50(4);
    FUN_005664c0(*(undefined4 *)(DAT_0079343c + 4));
  }
  else {
    FUN_00566410();
  }
  FUN_00566210();
  iVar1 = *(int *)(DAT_0079343c + 8);
  iVar3 = FUN_0056b910();
  FUN_005664c0((iVar3 + 1) * iVar1);
  FUN_00566210();
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x74))();
  FUN_005617a0();
  uVar4 = 1;
  FUN_005fb300(0);
  FUN_005eb700(uVar4);
  uVar4 = 1;
  FUN_005fb300(1);
  FUN_005eb700(uVar4);
  uVar4 = 1;
  FUN_005fb300(3);
  FUN_005eb700(uVar4);
  uVar4 = 1;
  FUN_005fb300(4);
  FUN_005eb700(uVar4);
  uVar4 = 1;
  FUN_005fb300(5);
  FUN_005eb700(uVar4);
  cVar2 = FUN_0056a5d0();
  if (cVar2 != '\0') {
    FUN_005601d0(1);
    FUN_005601d0(0);
  }
  cVar2 = FUN_0056a660();
  if (cVar2 == '\0') {
    FUN_00560240(5);
  }
  else {
    FUN_005601d0(5);
  }
  FUN_005601d0(6);
  cVar2 = FUN_0056a680();
  if (cVar2 != '\0') {
    uVar4 = FUN_005dcb00(0);
    FUN_005dbb70(uVar4);
  }
  return;
}

