// generated by GetConfigValueConsumer.java
#include "pch.h"
#include "value_lookup.h"
float getOutputValueByName(const char *name) {
	int hash = djb2lowerCase(name);
	switch(hash) {
// sd_present
		case -230533156:
			return engine->outputChannels.sd_present;
// sd_logging_internal
		case 708639006:
			return engine->outputChannels.sd_logging_internal;
// triggerScopeReady
		case -770506808:
			return engine->outputChannels.triggerScopeReady;
// antilagTriggered
		case 1155330306:
			return engine->outputChannels.antilagTriggered;
// isFanOn
		case -1441751117:
			return engine->outputChannels.isFanOn;
// isO2HeaterOn
		case 438683128:
			return engine->outputChannels.isO2HeaterOn;
// checkEngine
		case -1790051911:
			return engine->outputChannels.checkEngine;
// needBurn
		case 1368986296:
			return engine->outputChannels.needBurn;
// sd_msd
		case 459787871:
			return engine->outputChannels.sd_msd;
// isFan2On
		case -333212891:
			return engine->outputChannels.isFan2On;
// toothLogReady
		case -1662199734:
			return engine->outputChannels.toothLogReady;
// isTpsError
		case 14587330:
			return engine->outputChannels.isTpsError;
// isCltError
		case 518760558:
			return engine->outputChannels.isCltError;
// isMapError
		case 23640681:
			return engine->outputChannels.isMapError;
// isIatError
		case 1505102185:
			return engine->outputChannels.isIatError;
// isTriggerError
		case -1746157889:
			return engine->outputChannels.isTriggerError;
// hasCriticalError
		case -2015383594:
			return engine->outputChannels.hasCriticalError;
// isWarnNow
		case -1919072851:
			return engine->outputChannels.isWarnNow;
// isPedalError
		case -2035612655:
			return engine->outputChannels.isPedalError;
// isKnockChipOk
		case 1830366389:
			return engine->outputChannels.isKnockChipOk;
// launchTriggered
		case -52473827:
			return engine->outputChannels.launchTriggered;
// isTps2Error
		case -1529936844:
			return engine->outputChannels.isTps2Error;
// isIdleClosedLoop
		case 1473688883:
			return engine->outputChannels.isIdleClosedLoop;
// RPMValue
		case 1699696209:
			return engine->outputChannels.RPMValue;
// rpmAcceleration
		case -968092482:
			return engine->outputChannels.rpmAcceleration;
// speedToRpmRatio
		case -685727673:
			return engine->outputChannels.speedToRpmRatio;
// vehicleSpeedKph
		case -1925174695:
			return engine->outputChannels.vehicleSpeedKph;
// internalMcuTemperature
		case -871891659:
			return engine->outputChannels.internalMcuTemperature;
// coolant
		case -746111499:
			return engine->outputChannels.coolant;
// intake
		case 81034497:
			return engine->outputChannels.intake;
// auxTemp1
		case 1331305978:
			return engine->outputChannels.auxTemp1;
// auxTemp2
		case 1331305979:
			return engine->outputChannels.auxTemp2;
// TPSValue
		case 1272048601:
			return engine->outputChannels.TPSValue;
// throttlePedalPosition
		case -84435626:
			return engine->outputChannels.throttlePedalPosition;
// tpsADC
		case 513859492:
			return engine->outputChannels.tpsADC;
// rawMaf
		case 417956611:
			return engine->outputChannels.rawMaf;
// mafMeasured
		case -2032003569:
			return engine->outputChannels.mafMeasured;
// MAPValue
		case 1281101952:
			return engine->outputChannels.MAPValue;
// baroPressure
		case -2066867294:
			return engine->outputChannels.baroPressure;
// lambdaValue
		case -1119268893:
			return engine->outputChannels.lambdaValue;
// idleCurrentPosition
		case -736671365:
			return engine->outputChannels.idleCurrentPosition;
// VBatt
		case 277722310:
			return engine->outputChannels.VBatt;
// oilPressure
		case 598268994:
			return engine->outputChannels.oilPressure;
// vvtPositionB1I
		case 1384666006:
			return engine->outputChannels.vvtPositionB1I;
// chargeAirMass
		case -1836794433:
			return engine->outputChannels.chargeAirMass;
// crankingFuelMs
		case 326389246:
			return engine->outputChannels.crankingFuelMs;
// baseFuel
		case 727098956:
			return engine->outputChannels.baseFuel;
// fuelRunning
		case -395575790:
			return engine->outputChannels.fuelRunning;
// actualLastInjection
		case 681043126:
			return engine->outputChannels.actualLastInjection;
// injectorDutyCycle
		case -354325031:
			return engine->outputChannels.injectorDutyCycle;
// veValue
		case 1933507837:
			return engine->outputChannels.veValue;
// injectionOffset
		case -243031057:
			return engine->outputChannels.injectionOffset;
// tCharge
		case -744295709:
			return engine->outputChannels.tCharge;
// injectorLagMs
		case 1615892023:
			return engine->outputChannels.injectorLagMs;
// engineMakeCodeNameCrc16
		case 1726931380:
			return engine->outputChannels.engineMakeCodeNameCrc16;
// wallFuelAmount
		case 115540725:
			return engine->outputChannels.wallFuelAmount;
// wallFuelCorrectionValue
		case -1511514122:
			return engine->outputChannels.wallFuelCorrectionValue;
// revolutionCounterSinceStart
		case -1555114948:
			return engine->outputChannels.revolutionCounterSinceStart;
// deltaTpsValue
		case -917860253:
			return engine->outputChannels.deltaTpsValue;
// canReadCounter
		case 1247316691:
			return engine->outputChannels.canReadCounter;
// tpsAccelFuel
		case -384925312:
			return engine->outputChannels.tpsAccelFuel;
// warningCounter
		case 1492724763:
			return engine->outputChannels.warningCounter;
// lastErrorCode
		case -1346040258:
			return engine->outputChannels.lastErrorCode;
// coilDutyCycle
		case 1029096098:
			return engine->outputChannels.coilDutyCycle;
// idleAirValvePosition
		case -606474478:
			return engine->outputChannels.idleAirValvePosition;
// etbTarget
		case -2105094009:
			return engine->outputChannels.etbTarget;
// etb1DutyCycle
		case 1021133095:
			return engine->outputChannels.etb1DutyCycle;
// fuelTankLevel
		case 543832183:
			return engine->outputChannels.fuelTankLevel;
// totalFuelConsumption
		case 1417905588:
			return engine->outputChannels.totalFuelConsumption;
// fuelFlowRate
		case 822501973:
			return engine->outputChannels.fuelFlowRate;
// TPS2Value
		case 686191307:
			return engine->outputChannels.TPS2Value;
// tuneCrc16
		case -1158359776:
			return engine->outputChannels.tuneCrc16;
// knockLevel
		case 710253075:
			return engine->outputChannels.knockLevel;
// seconds
		case -1962923820:
			return engine->outputChannels.seconds;
// engineMode
		case -2073424832:
			return engine->outputChannels.engineMode;
// firmwareVersion
		case 799075048:
			return engine->outputChannels.firmwareVersion;
// rawIdlePositionSensor
		case -677561380:
			return engine->outputChannels.rawIdlePositionSensor;
// rawWastegatePosition
		case 2039421097:
			return engine->outputChannels.rawWastegatePosition;
// accelerationX
		case 633018087:
			return engine->outputChannels.accelerationX;
// accelerationY
		case 633018088:
			return engine->outputChannels.accelerationY;
// tsConfigVersion
		case 1299611400:
			return engine->outputChannels.tsConfigVersion;
// calibrationValue
		case -1560670902:
			return engine->outputChannels.calibrationValue;
// calibrationMode
		case 1774505810:
			return engine->outputChannels.calibrationMode;
// idleTargetPosition
		case -2029665121:
			return engine->outputChannels.idleTargetPosition;
// detectedGear
		case 283558758:
			return engine->outputChannels.detectedGear;
// maxTriggerReentrant
		case -1595441102:
			return engine->outputChannels.maxTriggerReentrant;
// totalTriggerErrorCounter
		case 2018173863:
			return engine->outputChannels.totalTriggerErrorCounter;
// orderingErrorCounter
		case -1326404407:
			return engine->outputChannels.orderingErrorCounter;
// debugFloatField1
		case 1240443767:
			return engine->outputChannels.debugFloatField1;
// debugFloatField2
		case 1240443768:
			return engine->outputChannels.debugFloatField2;
// debugFloatField3
		case 1240443769:
			return engine->outputChannels.debugFloatField3;
// debugFloatField4
		case 1240443770:
			return engine->outputChannels.debugFloatField4;
// debugFloatField5
		case 1240443771:
			return engine->outputChannels.debugFloatField5;
// debugFloatField6
		case 1240443772:
			return engine->outputChannels.debugFloatField6;
// debugFloatField7
		case 1240443773:
			return engine->outputChannels.debugFloatField7;
// debugIntField1
		case -183564276:
			return engine->outputChannels.debugIntField1;
// debugIntField2
		case -183564275:
			return engine->outputChannels.debugIntField2;
// debugIntField3
		case -183564274:
			return engine->outputChannels.debugIntField3;
// debugIntField4
		case -183564273:
			return engine->outputChannels.debugIntField4;
// debugIntField5
		case -183564272:
			return engine->outputChannels.debugIntField5;
// rawTps1Primary
		case -1051397637:
			return engine->outputChannels.rawTps1Primary;
// rawPpsPrimary
		case -347083354:
			return engine->outputChannels.rawPpsPrimary;
// rawClt
		case 417946098:
			return engine->outputChannels.rawClt;
// rawIat
		case 417952269:
			return engine->outputChannels.rawIat;
// rawOilPressure
		case 2070002124:
			return engine->outputChannels.rawOilPressure;
// fuelClosedLoopBinIdx
		case 1342844099:
			return engine->outputChannels.fuelClosedLoopBinIdx;
// tcuCurrentGear
		case -559761101:
			return engine->outputChannels.tcuCurrentGear;
// rawPpsSecondary
		case -1798336054:
			return engine->outputChannels.rawPpsSecondary;
// tcuDesiredGear
		case 471298448:
			return engine->outputChannels.tcuDesiredGear;
// flexPercent
		case 404628421:
			return engine->outputChannels.flexPercent;
// wastegatePositionSensor
		case 53406649:
			return engine->outputChannels.wastegatePositionSensor;
// idlePositionSensor
		case 782384530:
			return engine->outputChannels.idlePositionSensor;
// rawLowFuelPressure
		case -148455898:
			return engine->outputChannels.rawLowFuelPressure;
// rawHighFuelPressure
		case 990714516:
			return engine->outputChannels.rawHighFuelPressure;
// lowFuelPressure
		case -628741220:
			return engine->outputChannels.lowFuelPressure;
// highFuelPressure
		case -1973799222:
			return engine->outputChannels.highFuelPressure;
// AFRValue
		case -1093429509:
			return engine->outputChannels.AFRValue;
// VssAcceleration
		case -513494613:
			return engine->outputChannels.VssAcceleration;
// lambdaValue2
		case 1718832245:
			return engine->outputChannels.lambdaValue2;
// AFRValue2
		case -1723435379:
			return engine->outputChannels.AFRValue2;
// vvtPositionB1E
		case 1384666002:
			return engine->outputChannels.vvtPositionB1E;
// vvtPositionB2I
		case 1384666039:
			return engine->outputChannels.vvtPositionB2I;
// vvtPositionB2E
		case 1384666035:
			return engine->outputChannels.vvtPositionB2E;
// rawTps1Secondary
		case 2555743:
			return engine->outputChannels.rawTps1Secondary;
// rawTps2Primary
		case -1382627620:
			return engine->outputChannels.rawTps2Primary;
// rawTps2Secondary
		case 70357120:
			return engine->outputChannels.rawTps2Secondary;
// accelerationZ
		case 633018089:
			return engine->outputChannels.accelerationZ;
// accelerationRoll
		case -1670865464:
			return engine->outputChannels.accelerationRoll;
// accelerationYaw
		case -2133033504:
			return engine->outputChannels.accelerationYaw;
// turboSpeed
		case -4187390:
			return engine->outputChannels.turboSpeed;
// tps1Split
		case 644036825:
			return engine->outputChannels.tps1Split;
// tps2Split
		case 683172218:
			return engine->outputChannels.tps2Split;
// tps12Split
		case 1533250027:
			return engine->outputChannels.tps12Split;
// accPedalSplit
		case 864210494:
			return engine->outputChannels.accPedalSplit;
// sparkCutReason
		case -56739846:
			return engine->outputChannels.sparkCutReason;
// fuelCutReason
		case -1225000603:
			return engine->outputChannels.fuelCutReason;
// mafEstimate
		case -2045040875:
			return engine->outputChannels.mafEstimate;
// instantRpm
		case -658597643:
			return engine->outputChannels.instantRpm;
// systemEventReuse
		case -1111834928:
			return engine->outputChannels.systemEventReuse;
// rawMap
		case 417956621:
			return engine->outputChannels.rawMap;
// rawAfr
		case 417943720:
			return engine->outputChannels.rawAfr;
// tpsAccelFrom
		case -384928248:
			return engine->outputChannels.tpsAccelFrom;
// tpsAccelTo
		case 997467671:
			return engine->outputChannels.tpsAccelTo;
// calibrationValue2
		case 37467836:
			return engine->outputChannels.calibrationValue2;
// isMainRelayOn
		case -822552576:
			return engine->outputChannels.isMainRelayOn;
// isUsbConnected
		case 1836976702:
			return engine->outputChannels.isUsbConnected;
// luaInvocationCounter
		case 1766132801:
			return engine->outputChannels.luaInvocationCounter;
// luaLastCycleDuration
		case 823476017:
			return engine->outputChannels.luaLastCycleDuration;
// testBenchIter
		case 1092959609:
			return engine->outputChannels.testBenchIter;
// tcu_currentRange
		case -518694176:
			return engine->outputChannels.tcu_currentRange;
// tcRatio
		case -732434245:
			return engine->outputChannels.tcRatio;
// lastShiftTime
		case 174310950:
			return engine->outputChannels.lastShiftTime;
// vssEdgeCounter
		case 385418550:
			return engine->outputChannels.vssEdgeCounter;
// issEdgeCounter
		case 347478025:
			return engine->outputChannels.issEdgeCounter;
// auxLinear1
		case 803810399:
			return engine->outputChannels.auxLinear1;
// auxLinear2
		case 803810400:
			return engine->outputChannels.auxLinear2;
// dfcoActive
		case -622949795:
			return engine->outputChannels.dfcoActive;
// tpsAccelActive
		case 1506646480:
			return engine->outputChannels.tpsAccelActive;
// fallbackMap
		case -940825965:
			return engine->outputChannels.fallbackMap;
// instantMAPValue
		case -1162308767:
			return engine->outputChannels.instantMAPValue;
// maxLockedDuration
		case -558968637:
			return engine->outputChannels.maxLockedDuration;
// canWriteOk
		case 1193280444:
			return engine->outputChannels.canWriteOk;
// canWriteNotOk
		case 1964920685:
			return engine->outputChannels.canWriteNotOk;
// triggerPrimaryFall
		case 248437820:
			return engine->outputChannels.triggerPrimaryFall;
// triggerPrimaryRise
		case 248878000:
			return engine->outputChannels.triggerPrimaryRise;
// triggerSecondaryFall
		case 1016089632:
			return engine->outputChannels.triggerSecondaryFall;
// triggerSecondaryRise
		case 1016529812:
			return engine->outputChannels.triggerSecondaryRise;
// triggerVvtFall
		case 1537196344:
			return engine->outputChannels.triggerVvtFall;
// triggerVvtRise
		case 1537636524:
			return engine->outputChannels.triggerVvtRise;
// triggerVvt2Fall
		case -873628278:
			return engine->outputChannels.triggerVvt2Fall;
// triggerVvt2Rise
		case -873188098:
			return engine->outputChannels.triggerVvt2Rise;
// starterState
		case -1438648277:
			return engine->outputChannels.starterState;
// starterRelayDisable
		case 1286045659:
			return engine->outputChannels.starterRelayDisable;
// multiSparkCounter
		case 680091441:
			return engine->outputChannels.multiSparkCounter;
// extiOverflowCount
		case 1630166812:
			return engine->outputChannels.extiOverflowCount;
// alternatorStatus.pTerm
		case -1097329029:
			return engine->outputChannels.alternatorStatus.pTerm;
// alternatorStatus.iTerm
		case -1105630476:
			return engine->outputChannels.alternatorStatus.iTerm;
// alternatorStatus.dTerm
		case -1111560081:
			return engine->outputChannels.alternatorStatus.dTerm;
// alternatorStatus.output
		case -1889531804:
			return engine->outputChannels.alternatorStatus.output;
// alternatorStatus.error
		case -1110431971:
			return engine->outputChannels.alternatorStatus.error;
// alternatorStatus.resetCounter
		case -1254008074:
			return engine->outputChannels.alternatorStatus.resetCounter;
// idleStatus.pTerm
		case -1798819555:
			return engine->outputChannels.idleStatus.pTerm;
// idleStatus.iTerm
		case -1807121002:
			return engine->outputChannels.idleStatus.iTerm;
// idleStatus.dTerm
		case -1813050607:
			return engine->outputChannels.idleStatus.dTerm;
// idleStatus.output
		case 731084614:
			return engine->outputChannels.idleStatus.output;
// idleStatus.error
		case -1811922497:
			return engine->outputChannels.idleStatus.error;
// idleStatus.resetCounter
		case -424088744:
			return engine->outputChannels.idleStatus.resetCounter;
// etbStatus.pTerm
		case -41846406:
			return engine->outputChannels.etbStatus.pTerm;
// etbStatus.iTerm
		case -50147853:
			return engine->outputChannels.etbStatus.iTerm;
// etbStatus.dTerm
		case -56077458:
			return engine->outputChannels.etbStatus.dTerm;
// etbStatus.output
		case -1418343613:
			return engine->outputChannels.etbStatus.output;
// etbStatus.error
		case -54949348:
			return engine->outputChannels.etbStatus.error;
// etbStatus.resetCounter
		case 2098956565:
			return engine->outputChannels.etbStatus.resetCounter;
// boostStatus.pTerm
		case 407130790:
			return engine->outputChannels.boostStatus.pTerm;
// boostStatus.iTerm
		case 398829343:
			return engine->outputChannels.boostStatus.iTerm;
// boostStatus.dTerm
		case 392899738:
			return engine->outputChannels.boostStatus.dTerm;
// boostStatus.output
		case 513001967:
			return engine->outputChannels.boostStatus.output;
// boostStatus.error
		case 394027848:
			return engine->outputChannels.boostStatus.error;
// boostStatus.resetCounter
		case 308336833:
			return engine->outputChannels.boostStatus.resetCounter;
// wastegateDcStatus.pTerm
		case 1569192907:
			return engine->outputChannels.wastegateDcStatus.pTerm;
// wastegateDcStatus.iTerm
		case 1560891460:
			return engine->outputChannels.wastegateDcStatus.iTerm;
// wastegateDcStatus.dTerm
		case 1554961855:
			return engine->outputChannels.wastegateDcStatus.dTerm;
// wastegateDcStatus.output
		case 206346164:
			return engine->outputChannels.wastegateDcStatus.output;
// wastegateDcStatus.error
		case 1556089965:
			return engine->outputChannels.wastegateDcStatus.error;
// wastegateDcStatus.resetCounter
		case 156247622:
			return engine->outputChannels.wastegateDcStatus.resetCounter;
// auxSpeed1
		case 957036309:
			return engine->outputChannels.auxSpeed1;
// auxSpeed2
		case 957036310:
			return engine->outputChannels.auxSpeed2;
// ISSValue
		case 200047729:
			return engine->outputChannels.ISSValue;
// rawBattery
		case 1520918538:
			return engine->outputChannels.rawBattery;
// coilState1
		case -1124698530:
			return engine->outputChannels.coilState1;
// coilState2
		case -1124698529:
			return engine->outputChannels.coilState2;
// coilState3
		case -1124698528:
			return engine->outputChannels.coilState3;
// coilState4
		case -1124698527:
			return engine->outputChannels.coilState4;
// coilState5
		case -1124698526:
			return engine->outputChannels.coilState5;
// coilState6
		case -1124698525:
			return engine->outputChannels.coilState6;
// coilState7
		case -1124698524:
			return engine->outputChannels.coilState7;
// coilState8
		case -1124698523:
			return engine->outputChannels.coilState8;
// coilState9
		case -1124698522:
			return engine->outputChannels.coilState9;
// coilState10
		case 1539654222:
			return engine->outputChannels.coilState10;
// coilState11
		case 1539654223:
			return engine->outputChannels.coilState11;
// coilState12
		case 1539654224:
			return engine->outputChannels.coilState12;
// injectorState1
		case 2081101045:
			return engine->outputChannels.injectorState1;
// injectorState2
		case 2081101046:
			return engine->outputChannels.injectorState2;
// injectorState3
		case 2081101047:
			return engine->outputChannels.injectorState3;
// injectorState4
		case 2081101048:
			return engine->outputChannels.injectorState4;
// injectorState5
		case 2081101049:
			return engine->outputChannels.injectorState5;
// injectorState6
		case 2081101050:
			return engine->outputChannels.injectorState6;
// injectorState7
		case 2081101051:
			return engine->outputChannels.injectorState7;
// injectorState8
		case 2081101052:
			return engine->outputChannels.injectorState8;
// injectorState9
		case 2081101053:
			return engine->outputChannels.injectorState9;
// injectorState10
		case -43142203:
			return engine->outputChannels.injectorState10;
// injectorState11
		case -43142202:
			return engine->outputChannels.injectorState11;
// injectorState12
		case -43142201:
			return engine->outputChannels.injectorState12;
// triggerChannel1
		case -448033693:
			return engine->outputChannels.triggerChannel1;
// triggerChannel2
		case -448033692:
			return engine->outputChannels.triggerChannel2;
// vvtChannel1
		case -1764857649:
			return engine->outputChannels.vvtChannel1;
// outputRequestPeriod
		case 1894184322:
			return engine->outputChannels.outputRequestPeriod;
// mapFast
		case -1263258735:
			return engine->outputChannels.mapFast;
// rawMaf2
		case 907666325:
			return engine->outputChannels.rawMaf2;
// mafMeasured2
		case 1663359009:
			return engine->outputChannels.mafMeasured2;
// schedulingUsedCount
		case 967311941:
			return engine->outputChannels.schedulingUsedCount;
// totalFuelCorrection
		case -1779658835:
			return engine->fuelComputer.totalFuelCorrection;
// running.postCrankingFuelCorrection
		case -1288205717:
			return engine->fuelComputer.running.postCrankingFuelCorrection;
// running.intakeTemperatureCoefficient
		case 197173469:
			return engine->fuelComputer.running.intakeTemperatureCoefficient;
// running.coolantTemperatureCoefficient
		case 1822238385:
			return engine->fuelComputer.running.coolantTemperatureCoefficient;
// running.timeSinceCrankingInSecs
		case 526786951:
			return engine->fuelComputer.running.timeSinceCrankingInSecs;
// running.baseFuel
		case -42886021:
			return engine->fuelComputer.running.baseFuel;
// running.fuel
		case -794283008:
			return engine->fuelComputer.running.fuel;
// afrTableYAxis
		case 995190836:
			return engine->fuelComputer.afrTableYAxis;
// targetLambda
		case -734904659:
			return engine->fuelComputer.targetLambda;
// targetAFR
		case 2122891301:
			return engine->fuelComputer.targetAFR;
// stoichiometricRatio
		case 341978922:
			return engine->fuelComputer.stoichiometricRatio;
// sdTcharge_coff
		case 1417236183:
			return engine->fuelComputer.sdTcharge_coff;
// sdAirMassInOneCylinder
		case 1650433343:
			return engine->fuelComputer.sdAirMassInOneCylinder;
// sdIsTChargeAirModel
		case 816610019:
			return engine->fuelComputer.sdIsTChargeAirModel;
// injectorHwIssue
		case -1237512821:
			return engine->fuelComputer.injectorHwIssue;
// baseDwell
		case -1777838088:
			return engine->ignitionState.baseDwell;
// sparkDwell
		case -903101570:
			return engine->ignitionState.sparkDwell;
// dwellAngle
		case -1573373756:
			return engine->ignitionState.dwellAngle;
// cltTimingCorrection
		case 256951528:
			return engine->ignitionState.cltTimingCorrection;
// timingIatCorrection
		case -1886479485:
			return engine->ignitionState.timingIatCorrection;
// timingPidCorrection
		case -319326974:
			return engine->ignitionState.timingPidCorrection;
// baseIgnitionAdvance
		case 493641747:
			return engine->ignitionState.baseIgnitionAdvance;
// correctedIgnitionAdvance
		case 352421907:
			return engine->ignitionState.correctedIgnitionAdvance;
// dwellVoltageCorrection
		case -80612537:
			return engine->ignitionState.dwellVoltageCorrection;
// luaTimingAdd
		case -309610760:
			return engine->ignitionState.luaTimingAdd;
// luaTimingMult
		case -1626770351:
			return engine->ignitionState.luaTimingMult;
// isTpsInvalid
#if EFI_BOOST_CONTROL
		case -575666209:
			return engine->boostController.isTpsInvalid;
#endif
// m_shouldResetPid
#if EFI_BOOST_CONTROL
		case 1846215200:
			return engine->boostController.m_shouldResetPid;
#endif
// isBelowClosedLoopThreshold
#if EFI_BOOST_CONTROL
		case 1826317915:
			return engine->boostController.isBelowClosedLoopThreshold;
#endif
// isNotClosedLoop
#if EFI_BOOST_CONTROL
		case -1642402810:
			return engine->boostController.isNotClosedLoop;
#endif
// isZeroRpm
#if EFI_BOOST_CONTROL
		case 2111912944:
			return engine->boostController.isZeroRpm;
#endif
// hasInitBoost
#if EFI_BOOST_CONTROL
		case -2011570052:
			return engine->boostController.hasInitBoost;
#endif
// rpmTooLow
#if EFI_BOOST_CONTROL
		case 193830616:
			return engine->boostController.rpmTooLow;
#endif
// tpsTooLow
#if EFI_BOOST_CONTROL
		case -1033638560:
			return engine->boostController.tpsTooLow;
#endif
// mapTooLow
#if EFI_BOOST_CONTROL
		case -734877977:
			return engine->boostController.mapTooLow;
#endif
// luaTargetAdd
#if EFI_BOOST_CONTROL
		case 119157463:
			return engine->boostController.luaTargetAdd;
#endif
// boostOutput
#if EFI_BOOST_CONTROL
		case 1239062717:
			return engine->boostController.boostOutput;
#endif
// luaTargetMult
#if EFI_BOOST_CONTROL
		case -362320880:
			return engine->boostController.luaTargetMult;
#endif
// openLoopPart
#if EFI_BOOST_CONTROL
		case -1481117304:
			return engine->boostController.openLoopPart;
#endif
// luaOpenLoopAdd
#if EFI_BOOST_CONTROL
		case 1944984220:
			return engine->boostController.luaOpenLoopAdd;
#endif
// boostControllerClosedLoopPart
#if EFI_BOOST_CONTROL
		case -707712709:
			return engine->boostController.boostControllerClosedLoopPart;
#endif
// boostControlTarget
#if EFI_BOOST_CONTROL
		case -1712045196:
			return engine->boostController.boostControlTarget;
#endif
// lua.fuelAdd
		case 1649801578:
			return engine->engineState.lua.fuelAdd;
// lua.fuelMult
		case -1390672637:
			return engine->engineState.lua.fuelMult;
// lua.clutchUpState
		case -427776066:
			return engine->engineState.lua.clutchUpState;
// lua.brakePedalState
		case -1296201087:
			return engine->engineState.lua.brakePedalState;
// lua.acRequestState
		case 1517904291:
			return engine->engineState.lua.acRequestState;
// lua.luaDisableEtb
		case 2055342630:
			return engine->engineState.lua.luaDisableEtb;
// lua.luaIgnCut
		case -802271455:
			return engine->engineState.lua.luaIgnCut;
// sd.tCharge
		case -893334680:
			return engine->engineState.sd.tCharge;
// sd.tChargeK
		case 584726739:
			return engine->engineState.sd.tChargeK;
// sd.airFlow
		case 585422686:
			return engine->engineState.sd.airFlow;
// engineCycleDurationMs
		case 794378193:
			return engine->engineState.engineCycleDurationMs;
// minRpmKcurrentTPS
		case 392259965:
			return engine->engineState.minRpmKcurrentTPS;
// currentTpsAdc
		case 528119655:
			return engine->engineState.currentTpsAdc;
// tpsVoltageMCU
		case -1930648237:
			return engine->engineState.tpsVoltageMCU;
// tpsVoltageBoard
		case 2045413142:
			return engine->engineState.tpsVoltageBoard;
// currentBaroCorrectedVE
		case 713674786:
			return engine->engineState.currentBaroCorrectedVE;
// injectorFlowCorrection
		case -389464909:
			return engine->engineState.injectorFlowCorrection;
// baroCorrection
		case -281693247:
			return engine->engineState.baroCorrection;
// crankingFuel.baseFuel
		case 1119735859:
			return engine->engineState.crankingFuel.baseFuel;
// crankingFuel.coolantTemperatureCoefficient
		case -1206067863:
			return engine->engineState.crankingFuel.coolantTemperatureCoefficient;
// crankingFuel.tpsCoefficient
		case 20251202:
			return engine->engineState.crankingFuel.tpsCoefficient;
// crankingFuel.durationCoefficient
		case 1541006353:
			return engine->engineState.crankingFuel.durationCoefficient;
// crankingFuel.fuel
		case -180401224:
			return engine->engineState.crankingFuel.fuel;
// hellenBoardId
		case -295556270:
			return engine->engineState.hellenBoardId;
// clutchUpState
		case -797965330:
			return engine->engineState.clutchUpState;
// clutchDownState
		case 724244513:
			return engine->engineState.clutchDownState;
// brakePedalState
		case -705383759:
			return engine->engineState.brakePedalState;
// startStopState
		case 897099930:
			return engine->engineState.startStopState;
// startStopStateToggleCounter
		case -960645892:
			return engine->engineState.startStopStateToggleCounter;
// egtValue1
		case -244414221:
			return engine->engineState.egtValue1;
// egtValue2
		case -244414220:
			return engine->engineState.egtValue2;
// desiredRpmLimit
		case -505351565:
			return engine->engineState.desiredRpmLimit;
// fuelInjectionCounter
		case -1839290700:
			return engine->engineState.fuelInjectionCounter;
// sparkCounter
		case -1515591290:
			return engine->engineState.sparkCounter;
// fuelingLoad
		case 583799407:
			return engine->engineState.fuelingLoad;
// ignitionLoad
		case 1136482406:
			return engine->engineState.ignitionLoad;
// veTableYAxis
		case 1568071542:
			return engine->engineState.veTableYAxis;
// vvtCamCounter
		case 477303734:
			return engine->triggerCentral.vvtCamCounter;
// mapVvt_MAP_AT_SPECIAL_POINT
		case -1727829859:
			return engine->triggerCentral.mapVvt_MAP_AT_SPECIAL_POINT;
// mapVvt_MAP_AT_DIFF
		case -1585778708:
			return engine->triggerCentral.mapVvt_MAP_AT_DIFF;
// mapVvt_MAP_AT_CYCLE_COUNT
		case 1637661099:
			return engine->triggerCentral.mapVvt_MAP_AT_CYCLE_COUNT;
// mapVvt_map_peak
		case 845799744:
			return engine->triggerCentral.mapVvt_map_peak;
// currentEngineDecodedPhase
		case 162105111:
			return engine->triggerCentral.currentEngineDecodedPhase;
// triggerToothAngleError
		case -280624712:
			return engine->triggerCentral.triggerToothAngleError;
// triggerIgnoredToothCount
		case 989545496:
			return engine->triggerCentral.triggerIgnoredToothCount;
// dcOutput0
		case 1242329357:
			return engine->dc_motors.dcOutput0;
// isEnabled0_int
		case -1236599226:
			return engine->dc_motors.isEnabled0_int;
// isEnabled0
		case 1691876092:
			return engine->dc_motors.isEnabled0;
	}
	return EFI_ERROR_CODE;
}
