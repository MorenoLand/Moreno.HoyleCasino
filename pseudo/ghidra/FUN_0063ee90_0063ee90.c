// FUN_0063ee90  0063ee90

void __thiscall
FUN_0063ee90(CPropertySection *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  pvVar1 = CPropertySection::Get(param_1,3,(ulong *)0x0);
  uVar15 = 0;
  uVar14 = 0xff;
  uVar13 = 0xff;
  uVar12 = 0xff;
  uVar11 = 0xa1;
  uVar10 = 0x7c;
  uVar9 = 0x78;
  uVar8 = 2;
  iVar3 = param_6 * 0x10 + 0x18;
  uVar4 = 0x48;
  iVar5 = param_5;
  iVar6 = param_3;
  iVar7 = param_4;
  uVar2 = FUN_00630f40("SID_GENERIC_HELP",0x48,param_5,iVar3,param_3,param_4,2,0x78,0x7c,0xa1,0xff,
                       0xff,0xff,0,param_1,pvVar1);
  uVar2 = FUN_005fa790(0,param_2 * 100 + 0x32,uVar2,uVar4,iVar5,iVar3,iVar6,iVar7,uVar8,uVar9,uVar10
                       ,uVar11,uVar12,uVar13,uVar14,uVar15);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005fa5b0(param_7,param_2 * 100 + 0x33,&PTR_006b27f8,0x23,param_5 + -0x1e,param_6 << 4,
                       param_3 + 0xf,param_4 + 0xf,3,5,0xffffffff);
  FUN_005ff5a0(uVar2);
  return;
}

