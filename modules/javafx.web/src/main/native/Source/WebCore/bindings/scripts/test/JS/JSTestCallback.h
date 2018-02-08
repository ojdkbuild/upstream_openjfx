/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSTestCallback_h
#define JSTestCallback_h

#if ENABLE(SPEECH_SYNTHESIS)

#include "ActiveDOMCallback.h"
#include "JSCallbackData.h"
#include "TestCallback.h"
#include <wtf/Forward.h>

namespace WebCore {

class JSTestCallback : public TestCallback, public ActiveDOMCallback {
public:
    static Ref<JSTestCallback> create(JSC::JSObject* callback, JSDOMGlobalObject* globalObject)
    {
        return adoptRef(*new JSTestCallback(callback, globalObject));
    }

    virtual ScriptExecutionContext* scriptExecutionContext() const { return ContextDestructionObserver::scriptExecutionContext(); }

    virtual ~JSTestCallback();
    JSCallbackDataStrong* callbackData() { return m_data; }
    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);

    // Functions
    virtual bool callbackWithNoParam();
    virtual bool callbackWithArrayParam(RefPtr<Float32Array> arrayParam);
    virtual bool callbackWithSerializedScriptValueParam(PassRefPtr<SerializedScriptValue> srzParam, const String& strArg);
    COMPILE_ASSERT(false)    virtual int callbackWithNonBoolReturnType(const String& strArg);
    virtual int customCallback(Class5* class5Param, Class6* class6Param);
    virtual bool callbackWithStringList(PassRefPtr<DOMStringList> listParam);
    virtual bool callbackWithBoolean(bool boolParam);
    virtual bool callbackRequiresThisToPass(int longParam, TestNode* testNodeParam);

private:
    JSTestCallback(JSC::JSObject* callback, JSDOMGlobalObject*);

    JSCallbackDataStrong* m_data;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestCallback*);
inline JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestCallback& impl) { return toJS(state, globalObject, &impl); }

} // namespace WebCore

#endif // ENABLE(SPEECH_SYNTHESIS)

#endif