[Variables]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0
RegSub="^$":"0"
;***************** IMPORTANT NOTE ************************
;This is my key, feel free to use it with Sonder, but if you copy/release your own Rainmeter skin, get your own key...
;Bonus points if you get your own key(for free) if you use Sonder so we don't get my key revoked...:)
TimeZoneDBKey=YHQDWADF27MO

;Free API version can only update 1/second - please don't abuse this!!!!!
[TimeZoneUpdater2]
Measure=Calc
UpdateDivider=-1
Formula=1
ifCondition=(#WorldMapShow1# = 0)
ifTrueAction=[!Log "Updating Time Zones..."][!EnableMeasure @WorldMapLocation1Parent2][!CommandMeasure @WorldMapLocation1Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation2Parent2][!CommandMeasure @WorldMapLocation2Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation3Parent2][!CommandMeasure @WorldMapLocation3Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation4Parent2][!CommandMeasure @WorldMapLocation4Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation5Parent2][!CommandMeasure @WorldMapLocation5Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation6Parent2][!CommandMeasure @WorldMapLocation6Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation7Parent2][!CommandMeasure @WorldMapLocation7Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation8Parent2][!CommandMeasure @WorldMapLocation8Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation9Parent2][!CommandMeasure @WorldMapLocation9Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation10Parent2][!CommandMeasure @WorldMapLocation10Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation11Parent2][!CommandMeasure @WorldMapLocation11Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation12Parent2][!CommandMeasure @WorldMapLocation12Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation13Parent2][!CommandMeasure @WorldMapLocation13Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation14Parent2][!CommandMeasure @WorldMapLocation14Parent2 "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation15Parent2][!CommandMeasure @WorldMapLocation15Parent2 "Update"][!Delay 1100][!DisableMeasureGroup timezonedb2]
Disabled=1

[CurrentDate]
Measure=Time
Format=%b %#d %Y
FormatLocale=#LanguageOverride#

;===================================== TIME ZONE DATA =======================================
[@WorldMapLocation1Parent2]
Measure=WebParser
;URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation1#
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat1#&lng=#WorldMapLon1#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone1"][!SetVariable WorldMapTimeZone1 [@WorldMapLocation1Parent2]][!WriteKeyValue Variables WorldMapTimeZone1 [@WorldMapLocation1Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation2Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat2#&lng=#WorldMapLon2#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone2"][!SetVariable WorldMapTimeZone2 [@WorldMapLocation2Parent2]][!WriteKeyValue Variables WorldMapTimeZone2 [@WorldMapLocation2Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation3Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat3#&lng=#WorldMapLon3#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone3"][!SetVariable WorldMapTimeZone3 [@WorldMapLocation3Parent2]][!WriteKeyValue Variables WorldMapTimeZone3 [@WorldMapLocation3Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation4Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat4#&lng=#WorldMapLon4#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone4"][!SetVariable WorldMapTimeZone4 [@WorldMapLocation4Parent2]][!WriteKeyValue Variables WorldMapTimeZone4 [@WorldMapLocation4Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation5Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat5#&lng=#WorldMapLon5#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone5"][!SetVariable WorldMapTimeZone5 [@WorldMapLocation5Parent2]][!WriteKeyValue Variables WorldMapTimeZone5 [@WorldMapLocation5Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation6Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat6#&lng=#WorldMapLon6#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone6"][!SetVariable WorldMapTimeZone6 [@WorldMapLocation6Parent2]][!WriteKeyValue Variables WorldMapTimeZone6 [@WorldMapLocation6Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation7Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat7#&lng=#WorldMapLon7#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone7"][!SetVariable WorldMapTimeZone7 [@WorldMapLocation7Parent2]][!WriteKeyValue Variables WorldMapTimeZone7 [@WorldMapLocation7Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation8Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat8#&lng=#WorldMapLon8#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone8"][!SetVariable WorldMapTimeZone8 [@WorldMapLocation8Parent2]][!WriteKeyValue Variables WorldMapTimeZone8 [@WorldMapLocation8Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation9Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat9#&lng=#WorldMapLon9#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone9"][!SetVariable WorldMapTimeZone9 [@WorldMapLocation9Parent2]][!WriteKeyValue Variables WorldMapTimeZone9 [@WorldMapLocation9Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation10Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat10#&lng=#WorldMapLon10#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone10"][!SetVariable WorldMapTimeZone10 [@WorldMapLocation10Parent2]][!WriteKeyValue Variables WorldMapTimeZone10 [@WorldMapLocation10Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation11Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat11#&lng=#WorldMapLon11#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone11"][!SetVariable WorldMapTimeZone11 [@WorldMapLocation11Parent2]][!WriteKeyValue Variables WorldMapTimeZone11 [@WorldMapLocation11Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation12Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat12#&lng=#WorldMapLon12#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone12"][!SetVariable WorldMapTimeZone12 [@WorldMapLocation12Parent2]][!WriteKeyValue Variables WorldMapTimeZone12 [@WorldMapLocation12Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation13Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat13#&lng=#WorldMapLon13#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone13"][!SetVariable WorldMapTimeZone13 [@WorldMapLocation13Parent2]][!WriteKeyValue Variables WorldMapTimeZone13 [@WorldMapLocation13Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation14Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat14#&lng=#WorldMapLon14#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone14"][!SetVariable WorldMapTimeZone14 [@WorldMapLocation14Parent2]][!WriteKeyValue Variables WorldMapTimeZone14 [@WorldMapLocation14Parent2] "#@#Variables.inc"]
Disabled=1
DynamicVariables=1
UpdateRate=-1

[@WorldMapLocation15Parent2]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat15#&lng=#WorldMapLon15#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb2
FinishAction=[!Log "Updated TimeZone15"][!SetVariable WorldMapTimeZone15 [@WorldMapLocation15Parent2]][!WriteKeyValue Variables WorldMapTimeZone15 [@WorldMapLocation15Parent2] "#@#Variables.inc"][!WriteKeyValue Variables WorldMapTimeZoneUpdated [CurrentDate] "#@#Variables.inc"][!Redraw][!Update]
Disabled=1
DynamicVariables=1
UpdateRate=-1